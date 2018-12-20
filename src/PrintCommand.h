

#ifndef PROJECT_PRINTCOMMAND_H
#define PROJECT_PRINTCOMMAND_H

#include <iostream>
#include "Command.h"
#include "SymbolTable.h"

/**
 * Command which prints something to the stdout
 */
class PrintCommand : public Command {
    string output;
    unsigned int &index;

public:
    PrintCommand( unsigned int &index);

    void execute(const vector<string> &line);
};


#endif //PROJECT_PRINTCOMMAND_H
