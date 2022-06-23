#include <iostream>

using namespace std;

class complex
{
    float real;
    float img;

    public: 
        complex(float a=0, float b=0)
        {
            real=a;
            img=b;
        }
        void sum(complex &c)
        {
            real+=c.real;
            img+=c.img;
        }
        complex sum(complex &c1, complex &c2)
        {
            complex creturn;
            creturn.real=c1.real+c2.real;
            creturn.img=c1.img+c2.img;
            return creturn;
        }
        void display()
        {
            cout<<"\nReal:"<<real<<", Imaginary:"<<img;
        }
        friend complex operator+(complex & c1, complex & c2);
        
};

complex operator+(complex & c1, complex & c2)
{
    complex creturn;
    creturn.real= c1.real + c2.real;
    creturn.img= c1.img + c2.img;
    return creturn;
}



int main() {

    complex first(10,13);
    complex second(13,14);
    cout<<"first>>";
    first.display();
    complex thrid= first.sum(first,second);
    cout<<"first>>";first.display();
    cout<<"Third>>";
    thrid.display();
    
    cout<<"\n\nCalling + operator overload ";
    
    complex opVAlue = first + second;
    opVAlue.display();
    //first.operator+(second)

}