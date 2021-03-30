Sample Input:
10 15

Sample Output:
5

Solution:

Basic Version:

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res=gcd(a,b);
    cout<<res;
   
}

Optimised Version:

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res=gcd(a,b);
    cout<<res;
   
}
