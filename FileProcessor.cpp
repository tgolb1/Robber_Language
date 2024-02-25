#include "FileProcessor.h"

FileProcessor::FileProcessor(){
}

FileProcessor::~FileProcessor(){

}

void FileProcessor::processFile(string input, string output){
    ofstream MyFile("translation.html");
    MyFile << "<!DOCTYPE html>\n<html>\n\t<head></head>\n\t<body>\n";
    MyFile << "\t\t<b>" << input << "</b>\n\n";
    MyFile << "\t\t<br>\n\n";    //new line + blank line
    MyFile << "\t\t<i>" << output << "</i>\n";
    MyFile << "\t</body>\n</html>";
    MyFile.close();
}