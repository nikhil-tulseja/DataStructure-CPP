#include<iostream>
#include<stdio.h>

using namespace std;
class flo {
    float mem;

    public:
    flo ()
    {

    }
    flo(float f)
    {
        mem=f;
    }
    void display()
    {

        cout<<"this is member : "<<mem<<endl;
    }
    friend flo operator+(flo &f1,flo &f2);
    friend flo operator-(flo &f1,flo &f2);
    friend flo operator*(flo &f1,flo &f2);
    friend flo operator/(flo &f1,flo &f2);
};
    flo operator+(flo & f1,flo & f2)
    {
        flo f;
        f.mem=f1.mem+f2.mem;
        return f;
    }

    flo operator-(flo & f1,flo & f2)
    {
         flo f;
        f.mem=f1.mem-f2.mem;
        return f;
    }
    flo operator*(flo & f1,flo & f2)
    {
        cout<<f1.mem<<" "<<f2.mem<<endl;
        flo f;
        f.mem=(f1.mem)*(f2.mem);
        return f;
    }
    flo operator/(flo & f1,flo & f2)
    {
                cout<<f1.mem<<" "<<f2.mem<<endl;

        flo f;
        f.mem=(f1.mem)/(f2.mem);
        return f;
    }

int main(){

    flo f1(5.5);
    f1.display();
    flo f2(4.5);
    f2.display();
    flo f3;
    f3=f1+f2;
    f3.display();

    f3=f1-f2;
    f3.display();

    f3=(f1*f2);
    f3.display();

    f3=(f1/f2);
    f3.display();
    return 0;
}
