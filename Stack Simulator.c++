#include <stack>
#include <iostream>
using namespace std;
int main(){
    stack<int> s; int c,x;
    while(cin>>c && c){
        if(c==1){cin>>x; s.push(x);}
        if(c==2 && !s.empty()){ cout<<s.top()<<"\n"; s.pop(); }
    }
}
