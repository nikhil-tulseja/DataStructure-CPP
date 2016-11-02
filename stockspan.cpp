#include<iostream>
#include<stdlib.h>
#define STACKSIZE 100
#include<stack>

using namespace std ;


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
}
void calculateSpan(int price[] , int n , int s[])
{
    stack<int> st ;
    s[0]=1 ;
    st.push(0);
    for(int i=1 ; i<n ; i++ )
    {
        while(!st.empty() && price[st.top()]<=price[i])
        {
            st.pop() ;

        }
            s[i] = (st.empty())? i+1 : i-st.top() ;
            st.push(i) ;
    }

}

// Driver program to test above function
int main()
{
    int price[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(price)/sizeof(price[0]);
    int S[n];
    stack<int>st , aux ;
    // Fill the span values in array S[]
    //calculateSpan(price, n, S);

    // print the calculated span values
    printArray(S, n);

    return 0;
}
