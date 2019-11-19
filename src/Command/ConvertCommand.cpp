//
// Created by stas on 15.11.19.
//

#include "ConvertCommand.h"


bool ConvertCommand::IsMatch(const std::string &command) {
    std::stringstream ss(command);
    std::string command_str, target, f_in, f_out;
    (ss >> command_str >> target >> f_in >> f_out);
    return command_str == "convert" &&
            (target == "per" || target == "dep") &&
            !f_in.empty() && !f_out.empty() && ss.eof();
}

void ConvertCommand::Execute(const std::string &command) {
    std::stringstream ss(command);
    std::string command_str, target, f_in, f_out;
    (ss >> command_str >> target >> f_in >> f_out);

    if(target == "per"){
        Convert<Person>(f_in, f_out);
    }else{
        Convert<Department>(f_in, f_out);
    }
}

//convert department input_d.txt dep.bin