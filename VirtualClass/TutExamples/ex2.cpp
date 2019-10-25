#include<iostream>
using namespace std;

class Base{
    virtual void doSomething(){}
};
class Derived1:public Base{};
class Derived2:public Base{};

void showVptr(Base * instance){
    int *ptr= reinterpret_cast<int*>(instance);
    cout<< *ptr <<endl;// see the address
}

int main(){
    Base b;
    Derived1 d1;
    Derived2 d2;
    showVptr(&b);
    showVptr(&d1);
    showVptr(&d2);

    Derived1 d1_1;
    showVptr(&d1_1);
}