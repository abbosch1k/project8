#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,r; cin>>l>>r;
    srand(time(0));
    cout<<l + rand()%(r-l+1)<<"\n";
}
