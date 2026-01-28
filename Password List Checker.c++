#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> bad={"123456","password","qwerty"};
    string p; cin>>p;
    cout<<(bad.count(p)?"Weak\n":"OK\n");
}
