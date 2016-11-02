#include<iostream>
#include<map>
using namespace std ;
bool isPaliperm(string str)
{
    int len = str.size();
    int count_char = 0 ;
    map<char , int > m ;
    for(int i = 0 ; i < len ; i++)
    {
        if(str[i] != ' ')
            {
                count_char++ ;
                if(m.find(str[i]) != m .end() )
                    m[str[i]]++ ;
                else
                    m[str[i]] = 1 ;
            }

    }
    cout<<count_char<<endl;
    int odd_count = 0 ;
    for (std::map<char,int>::iterator it=m.begin(); it!=m.end(); ++it)
//    std::cout << it->first << " => " << it->second << '\n';
        {
            if(it->second %2 !=0 )
            {
                odd_count++ ;

            }

        }
    if(odd_count >1)
        return false ;
    else
        return true ;
}
int main()
{
    string str ;
    cout<<"Enter String " <<endl ;
    getline(cin,str );
    bool ans = isPaliperm(str) ;
    if(ans)
    {
        cout<< " HAI "<<endl ;
    }
    else
        cout<< " NI HAI "<<endl ;

    return 0 ;
}
