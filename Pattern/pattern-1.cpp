Standard input:
5

Standard output:
1
12
123
1234
12345

Solution:

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int i=1;
    while(i <= n)
    {
        int j=1;
        while(j <= i)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
	return 0;
}
