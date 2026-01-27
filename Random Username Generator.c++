#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> names={"alpha","beta","gamma","delta"};
    srand(time(0));
    cout<<names[rand()%names.size()]<<rand()%1000<<"\n";
}
