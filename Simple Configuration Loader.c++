#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream f("config.txt");
    string k,v;
    while(f>>k>>v) cout<<k<<" = "<<v<<"\n";
}
