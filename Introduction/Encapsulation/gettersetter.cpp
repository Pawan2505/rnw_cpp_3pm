#include<iostream>
using namespace std;

class Employee {
private:
    // Data members (kept private)
    string name;
    int age;
    int salary;

public:
    // Setter method to set the name
    void setName(string empName) {
        name = empName;
    }

    // Getter method to get the name
    string getName() {
        return name;
    }

    // Setter method to set the age
    void setAge(int empAge) {
        age = empAge;
    }

    // Getter method to get the age
    int getAge() {
        return age;
    }

    // Setter method to set the salary
    void setSalary(int empSalary) {
        salary = empSalary;
    }

    // Getter method to get the salary
    int getSalary() {
        return salary;
    }
};

int main() {
    // Creating an object of Employee
    Employee emp;

    // Setting values using setters
    emp.setName("Pawan");
    emp.setAge(24);
    emp.setSalary(50000);

    // Getting and displaying values using getters
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;

    return 0;
}
