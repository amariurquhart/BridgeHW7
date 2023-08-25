#include <iostream>
using namespace std;

void totalLetters(string str, int* p){

    int x;

    for(int i = 0; (i <= str.length()); i++){
        x = 0;
        if (str[i] >= 65 && str[i] <= 90){
            x = (int) (str[i] - 65);
            p[x] = p[x] + 1;
            }
        else if (str[i] >= 97 && str[i] <= 122){
            x = (int) (str[i] - 97);
            p[x] = p[x] + 1;
            }
    }  
}

void compareLetters(string str, int* p){

    int x;

    for(int i = 0; (i <= str.length()); i++){
        x = 0;
        if (str[i] >= 65 && str[i] <= 90){
            x = (int) (str[i] - 65);
            p[x] = p[x] - 1;
            }
        else if (str[i] >= 97 && str[i] <= 122){
            x = (int) (str[i] - 97);
            p[x] = p[x] - 1;
            }
    }  
}

int main(){
    
    string str;
    char ch;
    bool boo = true;
    typedef int* ArrayPtr;
    ArrayPtr p;
    p = new int[26];

    for(int i = 0; i < 26; i++)
        p[i] = 0;

    cout << "Enter the first line: ";
    getline(cin, str);
    totalLetters(str, p);
    cout << "Enter the second line: ";
    getline(cin, str);
    compareLetters(str, p);

    for (int i = 0; i < 26; i++){
        if(p[i] > 0)
            boo = false; 
    }

    if (boo == true)
        cout << "These two lines are anagrams";
    if (boo == false)
        cout << "These two lines are not anagrams";
    
    delete [] p;
    return 0;

}