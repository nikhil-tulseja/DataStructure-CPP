#include<iostream>
using namespace std;
const int size=10;
class item
{
    float ser[size];
    static int count;
    public:
    void createvec()
    {
        cout<<"enter values"<<endl;
        for(int i=0;i<10;i++)
        {
            cin>>ser[i];
        }
    }
    friend void modify(item &i);
    friend item addvec(item & x, item & y);
    void display()
    {
    for(int j=0;j<10;j++)
    {
        cout<<ser[j]<<endl;
    }
    }


    int getcount(){
    return count;
    }
    ~item(){
    cout<<"object successfully destroyed "
    <<endl;
    }
//    int *getcountadd()
//    {
//        return count;
//    }
};
int item :: count;
item addvec(item &x, item &y)
{
        int a;
        item i;
        for(a=0;a<10;a++)
        {
          i.ser[a]=x.ser[a]+y.ser[a];

        }
    return i;
}
void modify(item &i)
{
        int ch;

        cout<<"enter choice"<<endl;
        cin>>ch;

        switch(ch)
        {


        case 1:
        {
            int m;
            float rep;
        cout<<"enter the element position to modify"<<endl;
        cin>>m;
        cout<<"Replace with: "<<endl;
        cin>>rep;
        cout<<endl;
        i.ser[m-1]=rep;
        break;
        }

        case 2:
        {
        int r,sc;
        cout<<"enter scalar value"<<endl;
        cin>>sc;
        cout<<"which element? "<<endl;
        cin>>r;
        i.ser[r-1]=float(sc*(i.ser[r-1]));
        break;

        }

}
}
    int main(){
    item obj1;
    item obj2;
    obj1.createvec();
//     modify(obj1);
        obj2.createvec();
        item i=addvec(obj1,obj2);

        i.display();

//  cout<<obj1.getcount()<<endl;
//  cout<<obj2.getcount()<<endl;
//
//    obj1=obj1.addinch(obj2);
//  cout<<obj1.getcountadd()<<' ';
//  cout<<obj2.getcountadd()<<' ';
//
return 0 ;
}
