#include <iostream>
#include <string>
using namespace std;
class Professor {
private:
    string name;
    float salary;
    string dateOfJoining;
public:
    void inputDetails() {
        cout << "Enter Professor's Name: ";
        getline(cin, name);
        cout << "Enter Monthly Salary: ";
        cin >> salary;
        cin.ignore(); 
        cout << "Enter Date of Joining (DD/MM/YYYY): ";
        getline(cin, dateOfJoining);
    }
    void displayDetails() const {
        cout << "Professor's Name: " << name << endl;
        cout << "Monthly Salary: " << salary << endl;
        cout << "Date of Joining: " << dateOfJoining << endl;
    }
};
int main() {
    Professor professors[2];
    for (int i = 0; i < 2; ++i) {
        cout << "Enter details for Professor " << i + 1 << ":\n";
        professors[i].inputDetails();
        cout << endl;
    }
    cout << "Details of Professors:" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << "Professor " << i + 1 << ":" << endl;
        professors[i].displayDetails();
        cout << "---------------------" << endl;
    }
    return 0;
}

