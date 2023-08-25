#include <iostream>
#include <vector>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize){
    
    int aux[arrSize], odd = 0, even = (arrSize - 1);
    
    for(int i = 0; i < arrSize; i++){
        if(arr[i] % 2 == 0){
            aux[even] = arr[i];
            even--;
        }
        if(arr[i] % 2 == 1){
            aux[odd] = arr[i];
            odd++;
        }
    }   
    for(int i = (arrSize - 1); i >= 0; i--)
        arr[i] = aux[i];
}

int main(){

    int i, x;

    cout << "Enter the amount of digits: ";
    cin >> i;
    int arr[i];

    cout << "Enter each digit separated by a space:" << endl;
    for (int n = 0; n < i; n++){
        cin >> x;
        arr[n] = x;
    }
    
    oddsKeepEvensFlip (arr, i);

    for(int n = 0; n < i; n++)
        cout << (arr[n]) << " ";
    
    return 0;
}