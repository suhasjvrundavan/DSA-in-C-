Sample Input:
x=2 n=3

Sample Output:
8

Solution:

Naive Solution:

#include <bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        res=res*x;
    }
    return res;
}
int main() {
	
	int x,n;
	cin>>x>>n;
    int res= power(x,n);
    cout<<res;
	return 0;
}

Optimised Solution:

#include <bits/stdc++.h>
using namespace std;

int power(int x,int n)
{
    if(n==0)
        return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2 == 0)
        return temp;
    else
        return temp*x;
}
int main() {
	
	int x,n;
	cin>>x>>n;
    int res= power(x,n);
    cout<<res;
	return 0;
}
