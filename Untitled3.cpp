#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int compare (const void * a, const void * b)
{

   return *(int*)a-*(int*)b;
}
int main()
{

int n,q,x;
cin>>n>>q;
int array[n+4];

for(int i = 0;i<n;i++)
cin>>array[i];

for(int i = 0;i<n;i++)
cin>>x;

qsort(array, n , sizeof(int ), compare);

for(int i=n-1; i>=0 ; i-- )
{
    array[i-1]=array[i-1]+array[i] ;
}


int ans=0;
for(int i =0 ;i<q;i++){
cin>>x;

cout<<array[n-x]<<endl;
//ans =0 ;
//for(int i =n-1;i>= n-x; i-- ){
//ans+=array[i];

}


return 0;
}



