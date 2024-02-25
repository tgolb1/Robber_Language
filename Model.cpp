#include "Model.h"

Model::Model(){

}

Model::~Model(){

}

string Model::translateSingleConsonant(char cons){
    return (string(1, cons) + "o" + string(1, tolower(cons)));
}

string Model::translateSingleVowel(char vow){
    return string(1, vow);
}
