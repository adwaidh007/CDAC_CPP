#include<iostream>
#include<cmath>
using namespace std;

class Coordinate {
    public :
        double x, y;

        Coordinate(double x_val = 0, double y_val = 0){
            x = x_val;
            y = y_val;
        }
};

double CalculateDistance(Coordinate c1, Coordinate c2){
    return sqrt(pow(c2.x - c1.x,2) + pow(c2.y - c1.y, 2));
}

int main(){
    double x1,y1,x2,y2;

    cout<<"Enter x1, y1: ";
    cin>>x1>>y1;

    cout<<"Enter x2, y2: ";
    cin>>x2>>y2;

    Coordinate p1(x1, x2);
    Coordinate p2(x2, y2);

    cout<<"Distance between points: "<<CalculateDistance(p1, p2)<<endl;
    return 0;
}