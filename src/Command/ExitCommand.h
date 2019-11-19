//
// Created by stas on 15.11.19.
//

#ifndef LABBINARY_EXITCOMMAND_H
#define LABBINARY_EXITCOMMAND_H

#include "ICommand.h"

class ExitCommand : public ICommand{
public:
    bool IsMatch(const std::string &command) override;
    void Execute(const std::string &command) override;
};


#endif //LABBINARY_EXITCOMMAND_H
