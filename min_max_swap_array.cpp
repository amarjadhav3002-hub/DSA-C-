#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,45,34,5,78,23,2,50};
    int size = sizeof(arr)/sizeof(arr[0]);

    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < size; i++){
        if(arr[i] < arr[minIndex])
            minIndex = i;

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swap: { ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}

