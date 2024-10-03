// single inheritance
#include<iostream>
#include<string>
using namespace std;

class Uni {
    public:
    string university="Symbiosis International University: ";
    void discipline()
    {
        cout<<"Engineering"<<endl;
    }
};
class Department: public 
    Uni 
    {
    public:
    string dept="Electronics & Communication";
    };

int main(){
    Department a1;
    a1.discipline();
    cout<<a1.university+" "+a1.dept;
}
/*
Engineering
Symbiosis International University:  Electronics & Communication
*/