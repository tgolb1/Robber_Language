#include "Translator.h"

Translator::Translator(){
    myModel = new Model();
}

Translator::~Translator(){
    delete myModel;
}

string Translator::translateEnglishWord(string word) {
    char currentLetter;
    string translatedWord;
    string translatedLetter;

    for(int i=0; i<word.length(); ++i) {
        currentLetter = word.substr(i, i+1)[0];     //converts letter substr to char type
        if(Translator::isVowel(currentLetter) || ispunct(currentLetter) != 0) {      //checks for vowel or punctuation, left intact in both cases
            translatedLetter = myModel->translateSingleVowel(currentLetter);
        }
        else {      //if neither vowel nor punctuation, then consonant
            translatedLetter = myModel->translateSingleConsonant(currentLetter);
        }
        translatedWord += translatedLetter;     //concat translated letter to return string
    }
    return translatedWord;
}


string Translator::translateEnglishSentence(string sentence){
    string currentWord;
    string translatedWord;
    string translatedSentence;
    int endWord; //for substr, end of word

    while (sentence.find(' ') != string::npos) { //while a space is in the sentence...
        endWord = sentence.find(' ');
        currentWord = sentence.substr(0, endWord);
        translatedWord = translateEnglishWord(currentWord);
        translatedSentence += (translatedWord + " ");
        sentence.erase(0, endWord+1); //input sentence is trimmed as it is translated
    }
    translatedSentence += translateEnglishWord(sentence); //translate and append the last word
    
    return translatedSentence;
}

bool Translator::isVowel(char c) {
    return (tolower(c) == 'a'|| tolower(c) == 'e'|| tolower(c) == 'i'|| tolower(c) == 'o'|| tolower(c) == 'u');
}