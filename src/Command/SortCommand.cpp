//
// Created by stas on 18.11.19.
//

#include "SortCommand.h"

bool SortCommand::IsMatch(const std::string &command) {
    std::stringstream ss(command);
    std::string file_name, target, command_str;
    (ss >> command_str >> target >>  file_name);
    return command_str == "sort" && (target == "dep" || target == "per") && !file_name.empty() && ss.eof();
}

void SortCommand::Execute(const std::string &command) {
    std::stringstream ss(command);
    std::string file_name, command_str, target;
    (ss >> command_str >> target >> file_name);

    if(target == "dep"){
        DepartmentSorter sorter(file_name);
        sorter.Sort();
    }
}