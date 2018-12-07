
#include <fstream>
#include "Parser.h"

#define TEXT "file.txt"
/**
 * Runs on the file script, creates vector which each value has a string which represent a line
 * @param fileName name of the file
 * @return the lines vector
 */
vector<string> lexer(const string &fileName) {
    vector<string> vector;
    string tmp;
    fstream file;
    if (!file.is_open()) {
        file.open(fileName, fstream::in | fstream::app);
    }
    while (getline(file, tmp)) vector.push_back(tmp);
    file.close();
    return vector;
}

int main() {
    vector<string> lines = lexer(TEXT);
    auto *parser = new Parser(lines);
    parser->lineParse();
    return 0;
}