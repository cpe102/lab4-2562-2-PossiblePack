#include<iostream>
#include<cmath>
using namespace std;

float findDistance(float u,float a,float t){
  return u*t+0.5*a*pow(t,2);
}

int main(){
  cout << "u = 0, a = 0.5, t = 1, s = " << findDistance(0,0.5,1) << "\n";
  cout << "u = 1.5, a = -1, t = 2, s = " << findDistance(1.5,-1,2) << "\n";
  cout << "u = 5, a = 4, t = 3, s = " << findDistance(5,4,3) << "\n";
  return 0;
}
