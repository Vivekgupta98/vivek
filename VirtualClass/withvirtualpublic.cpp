int x;
class Base
{
    public:
    virtual void show()
    {
        x=4;
    }
};

class Derived:public Base
{
    public:
    void show()
    {
        x=5;
    }
};

int main()
{
    Base* b;       //Base class pointer
    Derived d;     //Derived class object
    d.show();
    b = &d;
    b->show();     //Late Binding Ocuurs
}