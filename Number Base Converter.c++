#include <iostream>
using namespace std;

int main(){
    int n,b; cin>>n>>b;
    string r="";
    while(n){ r=char('0'+n%b)+r; n/=b; }
    cout<<r<<"\n";
}
