Sample Input:
7

Sample Output:
*******
******
*****
****
***
**
*

Solution:

1.

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
	    int j=1;
	    while(j<=n-i+1)
	    {
	        cout<<"*";
	        j++;
	    }
	    cout<<endl;
	    i++;
	}
	return 0;
}

2.

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i=1;
	int num=n;
	while(i<=n)
	{
	    int j=1;
	    while(j<=num)
	    {
	        cout<<"*";
	        j++;
	    }
	    num--;
	    cout<<endl;
	    i++;
	}
	return 0;
}