#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main(){
    int sec; cin>>sec;
    this_thread::sleep_for(chrono::seconds(sec));
    cout<<"ALARM!\n";
}
