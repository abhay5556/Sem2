#include <iostream>
using namespace std;

int fibb(int x){
    int a = 0;
    int b = 1;
    int temp ;
    while(x>1){
        temp = b;
        b = a+b;
        a = b;
        x--;
    }
    return b;
}

int main() {
	int n;
	cin >>n;
    cout << fibb(n);
}
