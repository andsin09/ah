#include <iostream>
using namespace std;
#include <cmath>
#include <ctime>

int main(){
    //random number between 1 and 10
    cout << (rand()%10)+1 << endl;
    
    //rounding
    double doub = 1.853241234123;
    cout << round(doub*100)/100 << endl;

    //Question: Why do we need time for random numbers?
    //Answer: Because time can be used as a seed for random numbers to reduce the size of the random numbers.
}
