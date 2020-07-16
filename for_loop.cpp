#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,i;
    cin>>a>>b;
    string c[11]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++)
    {
        if((i>9) &&  (i%2==0))
        {
            cout<<c[0]<<endl;
        }
        else if((i>9) && (i%2!=0))
        {
            cout<<c[1]<<endl;
        }
        else 
        cout<<c[i+1]<<endl;

    }
    return 0;
}

