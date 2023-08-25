#include <iostream>
#include <vector>
using namespace std;

/*
string wordsarray
    for i in string sentence, 
        if sentence[i] != " " then
            word += sentence[i]
        if sentence[i] = " " or i = length then 
            vector.pushback(word)
            word = ""
    arrsize = length of vector

int main
    cin sentence
    wordsarray(sentence, var = 0)         
*/

string* createWordsArray(string sentence, int& outWordsArrSize){
    
    string word;
    vector<string> sentenceVector; 
    bool boo = false;

    for (int i = 0; i <= sentence.length(); i++){
        if(sentence[i] != 32){
            word += sentence[i];
            boo = true;
        }
        if((sentence[i] == 32) && (boo == true)){
            sentenceVector.push_back(word);
            word = "";
            boo = false;
        }
        if((i == sentence.length()) && (sentence[i - 1] != 32))
            sentenceVector.push_back(word);
    }
    
    outWordsArrSize = sentenceVector.size();
    string * sentenceArray = new string[outWordsArrSize];
    
    for(int i = 0; i < outWordsArrSize; i++)
        sentenceArray[i] = sentenceVector[i];
    
    return sentenceArray;
}

int main(){
    
    int ArrSize = 0;
    string sentence, *sentenceArray;

    cout << "Enter your sentence:" << endl;
    getline(cin, sentence);

    sentenceArray = createWordsArray(sentence, ArrSize);
    cout << "ArrSize: " << ArrSize << "\t" << "Array: ";
    
    for(int i = 0; i < ArrSize; i++){
        cout << sentenceArray[i];
        if(i < (ArrSize - 1))
            cout << ", ";
    }

    delete sentenceArray;
    return 0;

}