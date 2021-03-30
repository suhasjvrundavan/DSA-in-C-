Sample Input:
5

Sample Output:
1

Solution:

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
    cout<<res<<endl; 
    int res1=res;
    int count=0;
    while(res1!=0)
    {
        int temp=res1%10;
        if(temp==0)
        {
            count++;
        }
        res1=res1/10;
    }
    cout<<count;
}
