#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    cout << "Enter x = ";
    cin >> x;
    double Result;
    Result = (3*pow(x,3))+(2*exp(1))+pow(2,2*x+1)+pow((pow(x,2)+1),0.5);
    cout << "Result y = " << Result;  
    return 0;
}
