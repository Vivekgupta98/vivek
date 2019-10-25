#include<iostream>
using namespace std;

class Base{
    int someVariable;
    void doSomething(){
        cout<<"Base ka Do something"<<endl;
    }
    // void someotherSomething(){
    //     cout<<"Base ka Do something"<<endl;
    // }
};

class Derived:public Base{
    int derVaribale;
    void doSomething(){
        cout<<"Derived ka Do something"<<endl;
    }
};

int main(){
    cout<<sizeof(Base)<<endl;
    // change is due to tha addition of the vtable pointer added to the struct.
}