#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int ID;
    string name;
    int no_of_marks;
    static int objectCount;
public:
    Student(int id, string nm, int marks) : ID(id), name(nm), no_of_marks(marks) {
        objectCount++; 
    }
    static int getObjectCount() {
        return objectCount;
    }
    void display() const {
        cout << "ID: " << ID << ", Name: " << name << ", No. of Marks: " << no_of_marks << endl;
    }
};
int Student::objectCount = 0;
int main() {
    Student student1(101, "Ferari", 10);
    Student student2(205, "Dust", 9);
    student1.display();
    student2.display();
    cout << "Total number of objects created: " << Student::getObjectCount() << endl;
    return 0;
}

