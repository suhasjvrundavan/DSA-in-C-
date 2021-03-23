Standard Output:
4

Standard Output:
1
21
321
4321

Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int val=i;
        int j=1;
        while(j<=i)
        {
            cout<<val;
            val--;
            j++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}