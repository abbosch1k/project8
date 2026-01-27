#include <filesystem>
#include <map>
#include <iostream>
using namespace std; namespace fs=filesystem;
int main(){
    string p; cin>>p;
    map<string,int> m;
    for(auto&e:fs::directory_iterator(p))
        m[e.path().extension().string()]++;
    for(auto&x:m) cout<<x.first<<" "<<x.second<<"\n";
}
