#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string position;
    string department;

public:
    Employee() : name(""), id(0), position(""), department("") {}
    Employee(string n, int i, string p, string d) : name(n), id(i), position(p), department(d) {}

    void inputDetails() {
        cout << "Enter employee name: ";
        cin.ignore(); // to ignore newline left in the input buffer
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee position: ";
        cin.ignore();
        getline(cin, position);
        cout << "Enter employee department: ";
        getline(cin, department);
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Position: " << position << endl;
        cout << "Department: " << department << endl;
    }

    int getId() const {
        return id;
    }

    // Function to save employee details to file
    void saveToFile() const {
        ofstream outFile("employees.txt", ios::app);
        if (outFile.is_open()) {
            outFile << name << endl;
            outFile << id << endl;
            outFile << position << endl;
            outFile << department << endl;
            outFile << "-----" << endl; // Separator between employees
            outFile.close();
        } else {
            cout << "Unable to open file for writing!" << endl;
        }
    }

    // Function to read employee details from file
    static void readFromFile(int searchId) {
        ifstream inFile("employees.txt");
        string line;
        bool found = false;

        while (getline(inFile, line)) {
            if (line == "-----") {
                continue;
            }
            string name = line;
            int id;
            getline(inFile, line);
            id = stoi(line);
            string position = line;
            getline(inFile, line);
            string department = line;
            getline(inFile, line); // Read separator

            if (id == searchId) {
                cout << "Employee Found:" << endl;
                cout << "Name: " << name << endl;
                cout << "ID: " << id << endl;
                cout << "Position: " << position << endl;
                cout << "Department: " << department << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Employee with ID " << searchId << " not found." << endl;
        }

        inFile.close();
    }
};

int main() {
    int choice;
    vector<Employee> employees;

    while (true) {
        cout << "\nEmployee Management System" << endl;
        cout << "1. Input Employee Details" << endl;
        cout << "2. Retrieve Employee Details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Employee emp;
                emp.inputDetails();
                emp.saveToFile();
                employees.push_back(emp);
                break;
            }
            case 2: {
                int searchId;
                cout << "Enter employee ID to search: ";
                cin >> searchId;
                Employee::readFromFile(searchId);
                break;
            }
            case 3:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}

