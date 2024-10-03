//Multiple inheritance
#include<iostream>
#include<string>
using namespace std;

//Parent Class-1
class Vehicle 
{
    public:
    string company="Ford";
    void type()
    {
        cout<<"Mustang"<<endl;
    }
};
//Parent Class-2
class Specs 
{
    public:
    string mileage="8 kmpl";
    void colour()
    {
        cout<<"Grey and Black"<<endl;
    }
};
//Child Class-1 (derived from parent-1&2)
class Car: public Vehicle, public Specs 
{
    public:
    string seater="4 seater";
};

int main()
{
    //Multiple Inheritance
    Car f1;
    f1.colour();
    cout<<f1.company<<" ";
    f1.type();
    cout<<"("<<f1.seater<<")"<<endl<<"MILEAGE: "<<f1.mileage<<endl;
}
/*
Grey and Black
Ford Mustang
(4 seater)
MILEAGE: 8 kmpl
*/