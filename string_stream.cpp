#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	int tmp;
    char ch;
    vector<int> result;
    stringstream ss(str);
    while(ss>>tmp)
    {
        result.push_back(tmp);
        ss>>ch;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    for(const int& i:parseInts(str))
    cout<<i<<endl;
    
    return 0;
}

