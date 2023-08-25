#include <iostream>
#include <vector>
using namespace std;

void parseWords(string str, int& wordCount, int* p){

    int x;
    bool boo = false;

    for(int i = 0; (i <= str.length()); i++){
        x = 0;
        if(((str[i] == 32) || (str[i] == 44) || (str[i] == 46) || (i == str.length())) && (boo == true)){
            wordCount++;
            boo = false;
        }
        else if (str[i] >= 65 && str[i] <= 90){
            x = (int) (str[i] - 65);
            boo = true;
            p[x] = p[x] + 1;
            }
        else if (str[i] >= 97 && str[i] <= 122){
            x = (int) (str[i] - 97);
            boo = true;
            p[x] = p[x] + 1;
            }
        
    }  
}

int main(){

    string str;
    char ch;
    int wordCount = 0;
    typedef int* ArrayPtr;
    ArrayPtr p;
    p = new int[26];
    
    cout << "Please enter a line of text: " << endl;
    getline(cin, str);

    for(int i = 0; i < 26; i++)
        p[i] = 0;      
    
    parseWords(str, wordCount, p);
    cout << wordCount << "\twords" << endl;
    
    for (int i = 0; i < 26; i++){
        if(p[i] > 0){
            ch = (char) (i + 97);
            cout << ch << "\t" << p[i] << endl;
        }  
    }
    
    delete [] p;
    return 0;
}