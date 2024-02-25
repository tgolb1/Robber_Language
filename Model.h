#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>
using namespace std;

class Model {

    public: //main fuctions
        Model();
        ~Model();
        string translateSingleConsonant(char cons);
        string translateSingleVowel(char vow);

    private:

};

#endif