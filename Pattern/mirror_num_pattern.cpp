Sample Input 1:
3

Sample Output 1:
      1 
    12
  123

Sample Input 2:
4

Sample Output 2:
      1 
    12
  123
1234

Solution:

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
	    int s=1;
	    while(s<=n-i)
	    {
	        cout<<" ";
	        s++;
	    }
	    int j=1;
	    while(j<=i)
	    {
	        cout<<j;
	        j++;
	    }
	    cout<<endl;
	    i++;
	}
	return 0;
}
