#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    ofstream f("numbers.txt",ios::app);
    f<<(rand()%100)<<"\n";
}
