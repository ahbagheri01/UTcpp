#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
string f(string s);
int main() {
    string s;
    cin>>s;
    cout<<f(s);
}
string f(string s){
    if (s.size() <= 1 )
        return s;
    int k = s.size() -  s.size()/2;
    reverse(s.begin(),s.end());
    return f(s.substr(0,k)) + f(s.substr(k,s.size()));
}
