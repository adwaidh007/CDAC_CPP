#include<iostream>

class Cls{
    private:
        int objid;
    public:
        Cls();
        static int objcntr;
        int displayObjCount();
};

int Cls :: objcntr = 0;

Cls :: Cls(){
    objid = 1;
    std::cout<<"\nObject Created.";
    objcntr++;
}

int Cls :: displayObjCount(){
    return objcntr;
}

int main(){
    Cls c1;
    Cls c2;
    Cls c3;

    std::cout<<"\nNo of objects created: "<<Cls::objcntr;
    std::cout<<std::endl;
    return 0;
}