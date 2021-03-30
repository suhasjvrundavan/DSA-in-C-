Sample Input:
5

Sample Output:
120

Solution:

Iterative Solution:

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int res=fact(n);
    cout<<res;
}


Recursive Solution:

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
   if(n==0 || n==1)
        return 1;
    return n * fact(n-1); 
}
int main()
{
    int n;
    cin>>n;
    int res=fact(n);
    cout<<res;
}
