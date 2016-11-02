#include<stdio.h>
#include<cstring>
#include<iostream>
#include<string.h>
#include<cmath>
#include<cstdlib>

using namespace std;

bool fill(char * s ,char * solution , int position , int mx , int b){
 if(position == strlen(s)-1){
 	if(mx<9){
 		if(b){
	 	solution[position] = mx+1+48;
	    }
	 	else if(s[position]-48>=9)
	 	{
		 return 0;
		 }
	 	else{
	 	solution[position] = max(s[position]-48,mx)+48+1;
		 }
	 	solution[position+1] = '\0';
	 	cout<<solution<<endl;
	 	return 1;
	 }
	 else{
        return 0;
		}

 }
  if(b){
  	if(mx==9)
  	return 0 ;
  	else{
	  	for(int i = mx+1;i<=9;i++){
	  	    solution[position] = i+48;
		    if( fill(s,solution,position+1,i,b)==1)
		    return 1;
	  	}
	  	return 0;
	  }
  }
 else{
   if(mx == 9)
   return 0;
   mx = max(mx ,s[position]-1-48 );
    for(int i = mx+1;i<=9;i++){
	  	    solution[position] = i+48;
	  	    if(i+48 == s[position])
	  	    //if(i == mx-1)
		    {
			if( fill(s,solution,position+1,i,b)==1)
		    return 1;
		    }
		    else
		    if( fill(s,solution,position+1,i,1)==1)
		    return 1;
	  	}
	  	return 0;
}

}

void next_increasing(char * s){
    char solution[13];
    bool x = fill(s, solution, 0 , s[0]-'0'-1 , 0);
	if(0==x&&strlen(s)<9)
	  {
  	    for(int i = 1 ;i<=strlen(s)+1;i++)
	   cout<<i;
	   cout<<endl;
	   return;
	   }
	  if(0==x)
	   cout<<"No possible number "<<endl;
}

int main(){

 char s[13];

 cout<<"Enter number "<<endl;

 gets(s);

 next_increasing(s);

 return 0;

}
