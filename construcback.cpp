#include<iostream>
using namespace std;
const int size=10;
class Room
{
    int l;
    int w;
    static int copyc;
    public:
    Room(){
    l=12;
    w=8;
    }
    Room(Room & r)
    {
        w=r.w;
        cout<<"called"<<endl;
        copyc++;
    }
    void display()
    {
        cout<<copyc<<endl;
    }
};
int Room::copyc;
int main()
{
    Room obj1;
    Room obj2(obj1);
    Room obj3=obj2;
    Room obj4;
    obj4=obj3;

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
return 0;
}
