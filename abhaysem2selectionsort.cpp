#include <iostream>
using namespace std;

void selectionSort(int a[], int n){
    int i = 0;
    while(i<n){
        int j = i;
        int min = i;
        while(j<n){
            if(a[j]<a[min]){
                min = j;
            }
            j++;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        i++;
    }
    
    for(int x = 0; x<n; x++){
        cout << a[x] << " ";
    }
}

int main() {
    int array[] = {4, 3, 65, 3, 6, 4356};
    selectionSort(array, 6);
}
