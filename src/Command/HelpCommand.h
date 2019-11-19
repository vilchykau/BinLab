//
// Created by stas on 15.11.19.
//

#ifndef LABBINARY_HELPCOMMAND_H
#define LABBINARY_HELPCOMMAND_H

#include <iostream>

#include "ICommand.h"

class HelpCommand : public ICommand{
public:
    bool IsMatch(const std::string &command) override;
    void Execute(const std::string &command) override;
};


#endif //LABBINARY_HELPCOMMAND_H
