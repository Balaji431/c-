#include <iostream>
#include <string>
#include <unordered_map>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& accNum, const std::string& accHolder, double initialBalance)
        : accountNumber(accNum), accountHolderName(accHolder), balance(initialBalance) {}

    std::string getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void display() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

class BankingSystem {
private:
    std::unordered_map<std::string, BankAccount> accounts;

public:
    void createAccount(const std::string& accNum, const std::string& accHolder, double initialBalance) {
        accounts.emplace(accNum, BankAccount(accNum, accHolder, initialBalance));
        std::cout << "Account created successfully." << std::endl;
    }

    bool transferFunds(const std::string& fromAccNum, const std::string& toAccNum, double amount) {
        auto fromIt = accounts.find(fromAccNum);
        auto toIt = accounts.find(toAccNum);
        
        if (fromIt != accounts.end() && toIt != accounts.end()) {
            if (fromIt->second.withdraw(amount)) {
                toIt->second.deposit(amount);
                std::cout << "Funds transferred successfully." << std::endl;
                return true;
            } else {
                std::cout << "Error: Insufficient funds in the source account." << std::endl;
            }
        } else {
            std::cout << "Error: One or both account numbers are invalid." << std::endl;
        }
        return false;
    }

    void displayAllAccounts() const {
        std::cout << "All Account Details:" << std::endl;
        for (const auto& pair : accounts) {
            pair.second.display();
            std::cout << std::endl;
        }
    }
};

int main() {
    BankingSystem bank;

    std::string accNum, accHolder;
    double initialBalance;

    std::cout << "Creating Account 1." << std::endl;
    std::cout << "Account Number: ";
    std::getline(std::cin, accNum);
    std::cout << "Account Holder Name: ";
    std::getline(std::cin, accHolder);
    std::cout << "Initial Balance: ";
    std::cin >> initialBalance;
    std::cin.ignore(); // Ignore newline character left in buffer
    bank.createAccount(accNum, accHolder, initialBalance);

    std::cout << "Creating Account 2." << std::endl;
    std::cout << "Account Number: ";
    std::getline(std::cin, accNum);
    std::cout << "Account Holder Name: ";
    std::getline(std::cin, accHolder);
    std::cout << "Initial Balance: ";
    std::cin >> initialBalance;
    std::cin.ignore(); // Ignore newline character left in buffer
    bank.createAccount(accNum, accHolder, initialBalance);

    std::cout << "Transferring funds between accounts." << std::endl;
    std::string fromAccNum, toAccNum;
    double amount;
    std::cout << "From Account: ";
    std::getline(std::cin, fromAccNum);
    std::cout << "To Account: ";
    std::getline(std::cin, toAccNum);
    std::cout << "Amount: ";
    std::cin >> amount;
    std::cin.ignore(); // Ignore newline character left in buffer
    bank.transferFunds(fromAccNum, toAccNum, amount);

    bank.displayAllAccounts();

    return 0;
}
