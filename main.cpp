#include "FileProcessor.h"

int main(int argc, char **argv){
    Translator *tl = new Translator();
    FileProcessor *fp = new FileProcessor();
    string line;
    string input;
    string output;
    ifstream inFile("original.txt");

    while(getline(inFile, line)) {
        input += (line + "<br>"); //breaks added for html new lines
        output += (tl->translateEnglishSentence(line) + "<br>");
    }

    fp->processFile(input, output);
    delete fp;
    return 0;
}