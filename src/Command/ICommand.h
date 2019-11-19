//
// Created by stas on 15.11.19.
//

#ifndef LABBINARY_ICOMMAND_H
#define LABBINARY_ICOMMAND_H

#include <string>

class ICommand{
public:
    virtual bool IsMatch(const std::string &command){ return false;};
    virtual void Execute(const std::string &command){};
};

#endif //LABBINARY_ICOMMAND_H
