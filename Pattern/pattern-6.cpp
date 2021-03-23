Standard Input:
7

Standard Output:
7654321
7654321
7654321
7654321
7654321
7654321
7654321

Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int num=n;
        int j=1;
        while(j<=n)
        {
            cout<<num;
            num--;
            j++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}