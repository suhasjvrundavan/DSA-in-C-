Sample Input 1:
122

Sample Output 1:
0

Sample Input 2:
1221

Sample Output 2:
1

Solution:

#include <bits/stdc++.h>
using namespace std;

bool isPal(int n){
    
	int rev=0;
	int temp=n;
	while(temp!=0)
	{
	   int  ld = temp % 10;
        rev = rev*10 + ld;
        temp = temp/10;
	}
	return(rev==n);
}
int main()
{
    int n;
    cin>>n;
    bool res=isPal(n);
    cout<<res;
}
