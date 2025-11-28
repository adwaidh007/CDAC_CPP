#include<iostream>
#include<string>
using namespace std;

struct Employee{
    int employee_id;
    string emp_name;
    string designation;
    string department;
    double salary;
};

void getEmployeeInfo(Employee &emp) {
    cout << "\nEnter Employee ID: ";
    cin >> emp.employee_id;
    cin.ignore(); // clear newline from buffer

    cout << "\nEnter Employee Name: ";
    getline(cin, emp.emp_name);

    cout << "\nEnter Employee Designation: ";
    getline(cin, emp.designation);

    cout << "\nEnter Department: ";
    getline(cin, emp.department);

    cout << "\nEnter Salary: ";
    cin >> emp.salary;
    cin.ignore();
    cout << "-----------------------------\n";
}


void displayEmployeeInfo(const Employee &emp){
    cout<<"\n\tEmployee ID: "<<emp.employee_id<<endl;
    cout<<"\n\tEmployee Name: "<<emp.emp_name<<endl;
    cout<<"\n\tEmployee Designation: "<<emp.designation<<endl;
    cout<<"\n\tEmployee Department: "<<emp.department<<endl;
    cout<<"\n\tEmployee Salary:"<<emp.salary<<endl;
    cout<<"------------------------------"<<endl;
}

int countSalesEmployees(Employee employees[],int size){
    int count = 0;
    for(int i = 0;i < size; i++){
        if(employees[i].department == "sales" || employees[i].department == "Sales"){
            count++;
        }
    }
    return count;
}

int main(){
    const int SIZE = 10;
    Employee employees[SIZE];

    cout<<"Enter details for "<<SIZE<<" employees:"<<endl;
    for(int i = 0; i < SIZE; i++){
        cout<<"Employee "<<(i+1)<<":"<<endl;
        getEmployeeInfo(employees[i]);
    }

    cout<<"\nDisplaying Employee Information:"<<endl;
    for(int i = 0; i < SIZE; i++){
        displayEmployeeInfo(employees[i]);
    }

    int salesCount = countSalesEmployees(employees, SIZE);
    cout<<"\nNumber of employees in Sales department: "<<salesCount<<endl;
    return 0;
}