#include<conio.h>
#include<iostream>

using namespace std;

int main(){
cout<<"enter number"<<endl;
int n;

cin>>n;
do{
    int flag=0;
for(int i=2;i<=n/2;i++)
{
  if(n%i==0){
  flag=1;
  break;
}




}
if(flag)
{
 cout<< n <<" is not a prime"<<endl;
}

else{
    cout<<n<<" is a prime number"<<endl;
}
n++;
}while(n!=1000);
getche();

return 0;
}
