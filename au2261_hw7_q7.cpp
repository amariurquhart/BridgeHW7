#include <iostream>
#include <vector>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize){

    int x = 0;
    vector<int> v;

    for (int i = 0; i <= n; i++)
        v.push_back(i);
    for (int i = 0; i <= n; i++)
        v[arr[i]] = -1;   
    for (int i = 0; i <= n; i++){
        if (v[i] >= 0){
            v[x] = v[i];
            x++;  
        }
    }

    resArrSize = x;
    int * arrMiss = new int[x];

    for (int i = 0; i < x; i++)
        arrMiss[i] = v[i];
    
    return arrMiss;
}

int main(){
    
    int arraySize = 10, resArrSize = 0, array[arraySize] = {3, 3, 3, 3, 6, 4, 3, 3, 7, 8};
    
    int *missArray = findMissing(array, arraySize, resArrSize);

    cout << "Missing Values: ";
    for (int i = 0; i < resArrSize; i++){
        cout << missArray[i] << " , ";
    }
    cout << "Array Size: " << resArrSize;
    
    return 0;
}