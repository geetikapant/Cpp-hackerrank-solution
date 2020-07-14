#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    cin>>a;
    long b;
    cin>>b;
    char c;
    cin>>c;
    float d;
    cin>>d;
    double e;
    cin>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout.precision(3);
    cout<<fixed<<d<<"\n";
    cout.precision(9);
    cout<<fixed<<e;
    
   
    return 0;
}


