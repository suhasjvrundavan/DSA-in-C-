Sample Input:
a=12 b=15

Sample Output:
3

Solution:

Naive Solution:

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res=gcd(a,b);
    cout<<res;
   
}
