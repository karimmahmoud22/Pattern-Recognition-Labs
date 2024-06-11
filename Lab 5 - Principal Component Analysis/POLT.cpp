// implement a class employee with name, age, id , title , hours in c++
// and calculate the salary of the employee

#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string name;
    int age;
    int id;
    string title;
    int hours;
    int salary;
public:
    employee(string n, int a, int i, string t, int h);
    void set_name(string n);
    void set_age(int a);
    void set_id(int i);
    void set_title(string t);
    void set_hours(int h);
    void set_salary(int s);
    string get_name();
    int get_age();
    int get_id();
    string get_title();
    int get_hours();
    int get_salary();
    void print();

//implement a constuctor take each member data as parameter
employee::employee(string n, int a, int i, string t, int h)
{
    name = n;
    age = a;
    id = i;
    title = t;
    hours = h;
};

//implement a set function for each member data
void employee::set_name(string n)
{
    name = n;
};

void employee::set_age(int a)
{
    age = a;
};

void employee::set_id(int i)
{
    id = i;
};

void employee::set_title(string t)
{
    title = t;
};

void employee::set_hours(int h)
{
    hours = h;
};

void employee::set_salary(int s)
{
    salary = s;
};

//implement a get function for each member data
string employee::get_name()
{
    return name;
};

int employee::get_age()
{
    return age;
};

int employee::get_id()
{
    return id;
};

string employee::get_title()
{
    return title;
};

int employee::get_hours()
{
    return hours;
};

int employee::get_salary()
{
    return salary;
};

//implement a print function to print the member data

void employee::print()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Hours: " << hours << endl;
    cout << "Salary: " << salary << endl;
};

int main()
{
    employee e1("John", 25, 1234, "Manager", 40);
    e1.set_salary(1000);
    e1.print();
    return 0;
};

