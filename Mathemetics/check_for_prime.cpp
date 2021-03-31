Sample Input 1:
20

Sample Output 1:
0

Sample Input 2:
7

Sample Output 2:
1

Solution:

Naive Method:

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)
        return false;
    
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int main() {
	
	int n;
	cin>>n;
	int res=isprime(n);
	cout<<res;
	
	return 0;
}

Optimised Solution:

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)
        return false;
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int main() {
	
	int n;
	cin>>n;
	int res=isprime(n);
	cout<<res;
	
	return 0;
}

More Optimised Solution:

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2 == 0 || n%3 == 0)
        return false;
    
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i == 0 || n%(i+2) == 0)
            return false;
    }
    return true;
}
int main() {
	
	int n;
	cin>>n;
	int res=isprime(n);
	cout<<res;
	
	return 0;
}