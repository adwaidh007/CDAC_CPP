#include<iostream>
#include<string>
using namespace std;

class SmartAppliance{
    private:
        string applianceID;
        string brand;
        double price;
        string connectivityType;
        int warrantyYears;

    public:
       void inputDetails(){
        cout<<"\nEnter Appliance ID: \n";
        cin>>applianceID;

        cout<<"\nEnter Brand: \n";
        cin>>brand;

        cout<<"\nEnter Price: \n";
        cin>>price;
        cin.ignore();

        cout<<"\nEnter Connectivity Type (Wifi/Bluetooth/etc): \n";
        getline(cin, connectivityType);
        

        cout<<"\nEnter Warranty in Years: \n";
        cin>>warrantyYears;

        cout<<"---------------------------------"<<endl;

       }

       void displayDetails() const {
          cout<<"Appliance ID: "<<applianceID<<endl;
          cout<<"Brand: "<<brand<<endl;
          cout<<"Price:  "<<price<<endl;
          cout<<"Connectivity Type: "<<connectivityType<<endl;
          cout<<"Warranty: "<<warrantyYears<<" years"<<endl;
          cout<<"----------------------------------\n"<<endl;
       }
    

       bool hasLongWarranty() const{
        return warrantyYears > 2;
       }
};

int main(){
    const int SIZE = 3;
    SmartAppliance appliances[SIZE];
    int choice;

    cout<<"Enter details for "<<SIZE<<" smart appliances:\n";
    for(int i = 0; i < SIZE; i++){
        cout<<"\nAppliance "<<(i + 1)<<" : "<<endl;
        appliances[i].inputDetails();
    }

    do{
        cout<<"\n----Menu----\n";
        cout<<"1. Display All Appliances Details\n";
        cout<<"2. Display Appliances with warranty > 2 years\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"\nAll Appliances Details:\n";
                for(int i = 0; i < SIZE; i++){
                    appliances[i].displayDetails();
                }
                break;
            case 2:
                cout<<"\nAppliances with warranty > 2 years:\n";
                for(int i = 0; i < SIZE; i++){
                    if(appliances[i].hasLongWarranty()){
                        appliances[i].displayDetails();
                    }
                }
                break;
            case 3:
                cout<<"Exiting program..\n";
                break;
            default:
                cout<<"Invalid choice!! \n";
        }
    }while(choice != 3);
    return 0;
}