Standard Input:
4

Standard Output:
A
BB
CCC
DDDD

Solution:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
	return 0;
}
