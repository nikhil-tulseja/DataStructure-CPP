#include<iostream>
#include<String.h>

using namespace std;
const int size=10;
class String
{
    char *name;
    int l;
    public:
    String()
    {
        l=0;
        name=new char[l+1];
        cout<<"uninitialized String"<<endl;
    }
    String(char *s)
    {

//        l=strlen(s);
//        name=new char[l+1];
        name=s;
    }
    void concat(String &s1, String &s2);
    void display()
    {
    cout<<name<<endl;
    }
};
//    void String:: concat(String &s1, String &s2){
//        l=s2.l;
//        delete name;
//        name=new char[l+1];
//        name=s2.name;
//
//}
int main(){
    String obj1,obj3;
    String obj2("WELCOME!!");
//    obj3.concat(obj1,obj2);

    obj1.display();
    cout<<"khalistan"<<endl;
    obj2.display();
    obj3=obj2;
    obj3.display();

    return 0;
            }
