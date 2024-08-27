#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Admin : virtual public Person {
protected:
    int adminId;
public:
    void getData() {
        Person::getData();
        cout << "Enter Admin ID: ";
        cin >> adminId;
    }
    void displayData() {
        Person::displayData();
        cout << "Admin ID: " << adminId << endl;
    }
};
class Account : virtual public Person {
protected:
    float salary;
public:
    void getData() {
        Person::getData(); 
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayData() {
        Person::displayData(); 
        cout << "Salary: " << salary << endl;
    }
    float bonus() {
        return salary * 0.10;
    }
};
class Master : public Admin, public Account {
public:
    void getData() {
        Admin::getData();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData() {
        Admin::displayData();
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus() << endl;
    }
};
int main() {
    Master emp;
    emp.getData();
    cout << endl;
    emp.displayData();
    return 0;
}

