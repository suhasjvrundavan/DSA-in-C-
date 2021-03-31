Sample Input:
23 

Sample Output:
2 3 5 7 11 13 17 19 23

Solution:

Naive Solution:

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n == 1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2 == 0 || n%3 ==0)
        return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i == 0 || n%(i+2) == 0)
            return false;
        return true;
    }
}
void printPrime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}
int main() {
	
	int n;
	cin>>n;
   	printPrime(n);
	return 0;
}

Optimised Solution:

#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool>isPrime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
            cout<<i<<" ";
    }
}
int main() {
	
	int n;
	cin>>n;
    sieve(n);
	return 0;
}

Most Optimised Solution:

#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool>isPrime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
}
int main() {
	
	int n;
	cin>>n;
    sieve(n);
	return 0;
}

