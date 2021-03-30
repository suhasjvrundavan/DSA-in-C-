Sample Input:
a=4 b=6

Sample Output:
12

Solution:

Naive Solution:

#include <bits/stdc++.h>
using namespace std;

int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 && res%b ==0)
        {
            return res;
        }
        res++;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res=lcm(a,b);
    cout<<res;
   
}

Efficient Solution:

#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if (b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
   return (a * b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    int res=lcm(a,b);
    cout<<res;
   
}
