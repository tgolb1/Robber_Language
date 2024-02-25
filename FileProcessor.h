#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <fstream>
#include <string>
#include "Translator.h"

using namespace std;

class FileProcessor{

    public:
        FileProcessor();
        ~FileProcessor();
        void processFile(string txtIn, string htmlOut);

    private:
};

#endif