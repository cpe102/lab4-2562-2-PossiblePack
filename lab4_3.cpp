#include<iostream>
#include<cmath>
using namespace std;

int findDivision(int x){
	int i = 2;
	while(i>0){
		if(x%i==0){
			return i;
		}else{
			i++;
		}
	}
}

int main(){
	cout << "input: 10, Output = " << findDivision(10) << "\n";
	cout << "input: 97, Output = " << findDivision(97) << "\n";
	cout << "input: 221, Output = " << findDivision(221) << "\n";
	return 0;
}
