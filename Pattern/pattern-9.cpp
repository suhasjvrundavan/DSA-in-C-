Standard Input:
5

Standard Output:
*
**
***
****
*****

Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}
