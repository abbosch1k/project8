#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main(){
    int s; cin>>s;
    this_thread::sleep_for(chrono::seconds(s));
    cout<<"ALARM!\n";
}
