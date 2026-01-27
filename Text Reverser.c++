#include <iostream>
using namespace std;

int main(){
    string s;
    cin.ignore();
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<"\n";
}
