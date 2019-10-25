#include<iostream>
using namespace std;

class Base{
public:
    virtual void work(){
        cout<<"Base class\n";
    }
};

class D1:public Base{
public:
    void work(){
        cout<<"Derived 1\n";
    } 
};

class D2:public Base{
public:    
    void work(){
        cout<<"Derived 2\n";
    } 
};

class D3:public Base{
public:        
    void work(){
        cout<<"Derived 3\n";
    } 
};

int main(){
    srand(time(0));
    Base * ptr;
    switch(rand()%3){
        case 0:ptr=new D1;break;
        case 1:ptr=new D2;break;
        case 2:ptr=new D3;break;
    }
    ptr->work();
}