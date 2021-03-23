Standard Input:
5

Standard Output:
E
DE
CDE
BCDE
ABCDE

Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int num=n;
    while(i<=n)
    {
        int j=1;
        char ch='A'+num-1;
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        num--;
        i++;
    }
	return 0;
}
