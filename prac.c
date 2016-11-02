#include<stdlib.h>
int main(){
	float n = 1235.321;
	char s[100];
//	printf("%d\n",n);
//	sprintf(s,"%d",n);
	int i;
	int a=(int)n;
	float b=n-a;
	printf("%0.3f\t\n", b);
	for(i=3;i>=0;i--)
	{
            s[i]='0'+a%10;
            a=a/10;
	}
	*(s+4)='.';
	i=4;
//    b=abs(b);
	while(b!=0)
        {
            b=b*10;
            int t=(int)b;
            s[++i]='0'+t%10;
            b=b-t;
        }

    for(i=0;*(s+i);i++)
	{
    printf("%c",s[i]);
	}
}
