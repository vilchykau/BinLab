//
// Created by stas on 16.11.19.
//

#include "ReadCommand.h"

bool ReadCommand::IsMatch(const std::string &command) {
    std::stringstream ss(command);
    std::string command_str, target, f_name;
    (ss >> command_str >> target >> f_name);
    return command_str == "read" &&
           (target == "per" || target == "dep") &&
           !f_name.empty() && ss.eof();
}

void ReadCommand::Execute(const std::string &command) {
    std::stringstream ss(command);
    std::string command_str, target, f_name;
    (ss >> command_str >> target >> f_name);

    if(target == "per"){
        Read<Person>(f_name);
    }else{
        Read<Department>(f_name);
    }
}
