Sample Input:
20

Sample Output:
1 2 4 5 10 20

Solution:

Naive Solution:

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }
}
int main() {
	
	int n;
	cin>>n;
    printDivisors(n);
	return 0;
}

Optimised Solution:

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
    int i;
    for( i=1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }
    for( ;i>=1;i--)
    {
        if(n%i == 0)
        {
            cout<<n/i<<" ";
        }
    }
}
int main() {
	
	int n;
	cin>>n;
    printDivisors(n);
	return 0;
}