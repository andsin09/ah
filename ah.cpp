#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>

int main(){
    //random number between 1 and 10
    srand(time(0));
    cout << (rand()%10)+1 << endl;
    
    //rounding
    double doub = 1.853241234123;
    cout << round(doub*100)/100 << endl;

}
