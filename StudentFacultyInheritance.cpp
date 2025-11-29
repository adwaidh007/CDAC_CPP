#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
        string name;
        int age;
        string gender;
    
    public:
          void insertData(){
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter age: ";
            cin>>age;
            cin.ignore();
            cout<<"Enter Gender: ";
            getline(cin,gender);
          }

          void displayData() const {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
          }

};

class Student : public Person{
    private:
          int rollNumber;
          string course;
    public:
          void insertData(){
            Person::insertData();
            cout<<"Enter Roll Number: ";
            cin>>rollNumber;
            cin.ignore();
            cout<<"Enter Course: ";
            getline(cin, course);
          }
          void displayData() const {
            cout<<"Student Details:"<<endl;
            Person::displayData();
            cout<<"Roll Number: "<<rollNumber<<endl;
            cout<<"Course: "<<course<<endl;
          }
};


class Faculty : public Person{
    private:
          int employeeID;
          string department;
    public:
         void insertData(){
            Person::insertData();
            cout<<"Enter Employee ID: ";
            cin>>employeeID;
            cin.ignore();
            cout<<"Enter Department: ";
            getline(cin, department);
         }

         void displayData() const {
            cout<<"Faculty Details:"<<endl;
            Person::displayData();
            cout<<"Employee ID: "<<employeeID<<endl;
            cout<<"Department: "<<department<<endl;
         }
};

int main(){
    Student s;
    Faculty f;

    cout<<"Enter Student Details: "<<endl;
    s.insertData();

    cout<<"\nEnter Faculty Details: "<<endl;
    f.insertData();

    s.displayData();
    f.displayData();
    return 0;

}