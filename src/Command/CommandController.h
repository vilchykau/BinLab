//
// Created by stas on 15.11.19.
//

#ifndef LABBINARY_COMMANDCONTROLLER_H
#define LABBINARY_COMMANDCONTROLLER_H

#include <sstream>
#include <vector>
#include <exception>

#include "ICommand.h"
#include "HelpCommand.h"
#include "ConvertCommand.h"
#include "ExitCommand.h"
#include "ReadCommand.h"
#include "SortCommand.h"

class CommandController{
public:
    CommandController();
    ~CommandController();
    void Execute(const std::string& command);
private:
    std::vector<ICommand*> commands;
};


#endif //LABBINARY_COMMANDCONTROLLER_H
