#include <fstream>
#include <iostream>
using namespace std;
int main(){
    string k,v;
    ofstream o("config.txt");
    while(cin>>k>>v) o<<k<<" "<<v<<"\n";
}

