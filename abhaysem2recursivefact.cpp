#include <iostream>
using namespace std;

int fact(int x){
    if(x>1){
        return x*fact(x-1);
    }
    else{
        return 1;
    }
}
int main() {
	int n;5
	cin>>n;
    cout<<fact(n)<< endl;
}
