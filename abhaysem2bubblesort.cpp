#include <iostream>
using namespace std;

void bubbleSort(int array[], int n){
    for(int i = 1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int x=0; x<n;x++){
        cout << array[x] <<" ";
    }    
}

int main() {
    int arr[] = {4, 3, 65, 3, 6, 4356};
    bubbleSort(arr, 6);
}
