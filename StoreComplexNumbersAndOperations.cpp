#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0){
            real =  r;
            imag = i;
        }

        void input(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part :";
            cin>>imag;
        }

        void display() const{
            cout<<real<<" + "<<imag<<" i "<<endl;
        }

        Complex add(const Complex &c) const{
            return Complex(real + c.real, imag + c.imag);
        }

        Complex subtract(const Complex &c)const {
            return Complex(real - c.real, imag - c.imag);
        }

        Complex multiply(const Complex &c) const{
            return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
        }


};

int main() {
    Complex c1, c2, result;
    int choice;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            result = c1.add(c2);
            cout << "Result of addition: ";
            result.display();
            break;

        case 2:
            result = c1.subtract(c2);
            cout << "Result of subtraction: ";
            result.display();
            break;

        case 3:
            result = c1.multiply(c2);
            cout << "Result of multiplication: ";
            result.display();
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
};
