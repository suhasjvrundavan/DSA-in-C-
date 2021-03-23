Standard Input:
4

Standard Output:
ABCD
ABCD
ABCD
ABCD

Solution:

1.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
           char ch='A'+j-1;
           cout<<a;
           j++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}

2.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
	char a='A';
        while(j<=n)
        {
           cout<<a;
	   a++;
           j++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}