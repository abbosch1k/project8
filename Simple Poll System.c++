#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> poll;
    int c; string opt;
    while(cin>>c && c){
        if(c==1){cin>>opt; poll[opt]++;}
        if(c==2) for(auto&p:poll) cout<<p.first<<" "<<p.second<<"\n";
    }
}
