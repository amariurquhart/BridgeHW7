#include <iostream>
#include <array>
#include <vector>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){

    int n = 0;
    int * arrPos = new int[arrSize];

    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            arrPos[n] = arr[i];
            n++;
        }
    }

    outPosArrSize = n;

    return arrPos;
}

int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr){

    int n = 0;
    int * arrPos = new int[arrSize];

    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            arrPos[n] = arr[i];
            n++;
        }
    }
    
    *outPosArrSizePtr = n;

    return arrPos;
}

void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize){

    int n = 0;
    outPosArr = arr;

    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            outPosArr[n] = arr[i];
            n++;
        }
    }
    
    outPosArrSize = n;
}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr){

    int n = 0;
    int * arrPos = new int[arrSize];
    
    for (int i = 0; i < arrSize; i++){
        if (arr[i] > 0){
            arrPos[n] = arr[i];
            n++;
        }
    }
    
    *outPosArrPtr = arrPos;
    *outPosArrSizePtr = n;

}

/* 
This function can be tested out for each section by 
changing the value in arraynsize = _; and putting the equivalent amount of integers in the following line 
(83-84, 99-100, 115-116, 130-131)
*/

int main(){

    int outPosArrSize1, *outArray1, *outPosArrSize2, *outArray2, outPosArrSize3, *outArray3, *outPosArrSize4, *outArray4;
    

    int array1size = 8;
    int array1[array1size] = {3, -1, -3, 0, 6, 4, -5, 8};
    cout << "Array1\tSize: " << array1size << "\t\t\tArray: ";
    for (int i = 0; i < array1size; i++)
        cout << array1[i] << " | ";
    cout << endl;

    outArray1 = getPosNums1(array1, array1size, outPosArrSize1);

    cout << "\tPositive Size: " << outPosArrSize1 << "\tPositive Array: ";
    for (int i = 0; i < outPosArrSize1; i++)
        cout << outArray1[i] << " | ";
    delete outArray1;
    cout << endl;


    int array2size = 8;
    int array2[array2size] = {3, -1, -3, 0, 6, 4, -5, 8};
    cout << "Array2\tSize: " << array2size << "\t\t\tArray: ";
    for (int i = 0; i < array2size; i++)
        cout << array2[i] << " | ";
    cout << endl;

    outArray2 = getPosNums2(array2, array2size, &array2size);

    cout << "\tPositive Size: " << array2size << "\tPositive Array: ";
    for (int i = 0; i < array2size; i++)
        cout << outArray2[i] << " | ";
    delete outArray2;
    cout << endl;


    int array3size = 8;
    int array3[array3size] = {3, -1, -3, 0, 6, 4, -5, 8};
    cout << "Array3\tSize: " << array3size << "\t\t\tArray: ";
    for (int i = 0; i < array3size; i++)
        cout << array3[i] << " | ";
    cout << endl;

    getPosNums3(array3, array3size, outArray3, outPosArrSize3);

    cout << "\tPositive Size: " << outPosArrSize3 << "\tPositive Array: ";
    for (int i = 0; i < outPosArrSize3; i++)
        cout << outArray3[i] << " | ";
    cout << endl;
    
    
    int array4size = 8;
    int array4[array4size] = {3, -1, -3, 0, 6, 4, -5, 8};
    cout << "Array4\tSize: " << array4size << "\t\t\tArray: ";
    for (int i = 0; i < array4size; i++)
        cout << array4[i] << " | ";
    cout << endl;

    getPosNums4(array4, array4size, &outArray4, &array4size);

    cout << "\tPositive Size: " << array4size << "\tPositive Array: ";
    for (int i = 0; i < array4size; i++)
        cout << outArray4[i] << " | ";
    delete outArray4;
    delete outArray3;
    cout << endl;

    return 0;
}