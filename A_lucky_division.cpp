#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n%10;
    if(m==4 || m==7)
    {
        printf("YES");
    }
    else if(n%4==0 || n%7==0)
    {printf("YES");}
    else printf("NO");
    
}