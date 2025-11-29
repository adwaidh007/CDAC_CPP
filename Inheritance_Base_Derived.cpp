#include<iostream>
using namespace std;

class Base{
    private:
          void pvt_base_display(){
            std:: cout<<"Private Base Display"<<endl;
          }
    protected:
            void prot_base_display(){
                std:: cout<<"Protected Base Display"<<endl;
            }
    public:
            void pub_base_display(){
                std:: cout<<"Public Base Display"<<endl;
            }
};

class Derived : public Base{
    private:
            void pvt_der_display(){
                std:: cout<<"Private Derived Display"<<endl;
            }
    protected:
            void prot_der_display(){
                // pvt_base_display();
                // prot_base_display();
                std:: cout<<"Protected Derived Display"<<endl;
            }
    public:
            void pub_der_display(){
                // pvt_base_display();
                // prot_base_display();
                std:: cout<<"Public Derived Display"<<endl;
            }
};

int main(){
    
    Base B;
    Derived D;

    B.pub_base_display();    
    D.pub_base_display();
    D.pub_der_display();


    std::cout<<std::endl;
    return 0;
}