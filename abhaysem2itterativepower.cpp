#include <iostream>
using namespace std; 
int pow(int x, int p){
    int result = 1;
    while(p>0){
        result*=x;
        p-=1;
    }
    return result;
}
int main() {
	int base,power;
	cin>>base;
	cout<<"to the power";
	cin>>power;
    cout << pow(6, 2) << endl;
}
