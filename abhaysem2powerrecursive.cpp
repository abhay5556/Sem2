#include <iostream>
using namespace std;

int pow(int x, int p){
    if(p==1){
        return x;
    }
    else{
        return x*pow(x, p-1);
    }
}
int main() {
	int base,power;
	cin>>base;
	cout<<"to the power";
	cin>>power;
    cout << pow(6, 2) << endl;
}
