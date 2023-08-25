#include <iostream>
#include <vector>
using namespace std;

void main1();
void main2();

main(){
    main1();
    main2();
    return 0;
}

void main1(){
    
    int i = 0, commaChecker = 0;
    string str, num, val;

    cout << "Please enter a sequence of positive integers, each in a separate line.\nEnd your input by typing -1.\n";
    cin >> val;

    while(val != "-1"){
        i++;
        str = str + val + ".";
        cin >> val;
    }
    
    string array[i];
    int x = 0;
   
    for (int n = 0; n <= str.length(); n++){
        if(str[n] != 46)
            num += str[n];
        if(str[n] == 46){
            array[x] = num;
            x++;
            num = "";
        }
    }
    
    cout << "Please enter a number you want to search:\n";
    cin >> val;
    cout << val << " shows in lines ";

    for (x = 0; x < i; x++){
        if(val == array[x]){
            if(commaChecker > 0)
                cout << ", ";
            commaChecker++;    
            cout << (x + 1);
        }
    }
    cout << endl;
}

void main2(){
    
    int x, i = 0, commaChecker = 0;
    string val;
    vector<string> array;

    cout << "Please enter a sequence of positive integers, each in a separate line.\nEnd your input by typing -1.\n";
    cin >> val;

    while(val != "-1"){
        i++;
        array.push_back(val);
        cin >> val;
    }
    
    cout << "Please enter a number you want to search:\n";
    cin >> val;
    cout << val << " shows in lines ";

    for (x = 0; x < i; x++){
        if(val == array[x]){
            if(commaChecker > 0)
                cout << ", ";
            commaChecker++;    
            cout << (x + 1);
        }
    }
}