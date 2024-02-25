#ifndef TRANSLATOR_H //header guard
#define TRANSLATOR_H

#include "Model.h"
#include <iostream> //pre-processor directive
#include <string>
using namespace std;

class Translator {

    public: //main fuctions
        Translator();
        ~Translator();
        string translateEnglishWord(string word);
        string translateEnglishSentence(string sent);

    private: //helper functions
        bool isVowel(char c); //vowels return true
        Model *myModel;
};

#endif