#include<iostream>
using namespace std;
int main()
{
    long long int m,n,a,dm,dn;
    cin>>m>>n>>a;

    
        dm=m/a;
        m=m%a;
        
        if(m==0)
        {
            dm=dm;
        }
        else{
            dm=dm+1;
        }

        dn=n/a;
        n=n%a;
       
        if(n==0)
        {
            dn=dn;
        }
        else{
            dn=dn+1;
        }
       long long int mul=dm*dn;
        cout<<mul;

        

}