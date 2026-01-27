#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ifstream a("a.txt"), b("b.txt");
    ofstream o("merged.txt");
    o<<a.rdbuf()<<b.rdbuf();
}
