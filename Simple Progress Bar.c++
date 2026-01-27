#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main(){
    for(int i=0;i<=100;i+=10){
        cout<<"\rProgress: "<<i<<"%"<<flush;
        this_thread::sleep_for(chrono::milliseconds(300));
    }
    cout<<"\nDone\n";
}
