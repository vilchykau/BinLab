//
// Created by stas on 15.11.19.
//

#include "ExitCommand.h"

bool ExitCommand::IsMatch(const std::string &command) {
    return command == "exit";
}

void ExitCommand::Execute(const std::string &command) {
    exit(0);
}
