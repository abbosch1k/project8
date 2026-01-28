#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream f("text.txt");
    map<string,int> cnt; string w;
    while(f>>w) cnt[w]++;
    for(auto&p:cnt) cout<<p.first<<" "<<p.second<<"\n";
}
