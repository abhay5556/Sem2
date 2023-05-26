#include <iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    while(x>0){
        fact*=x;
        x-=1;
    }
    return fact;
}

int main() {
	int n;
	cin >>n;
    cout <<factorial(n);
}
