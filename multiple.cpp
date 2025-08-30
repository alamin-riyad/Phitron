#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b || b>a)
    {
        int d=a%b;
        int dd=b%a;
        if(d==0 || dd==0)
        {
            cout<<"Multiples";
        }
        else cout<<"No Multiples";
    }
}