//
// Created by stas on 15.11.19.
//

#include "CommandController.h"

CommandController::CommandController() {
    commands.push_back(new ExitCommand());
    commands.push_back(new HelpCommand());
    commands.push_back(new ConvertCommand());
    commands.push_back(new ReadCommand());
    commands.push_back(new SortCommand());
}

CommandController::~CommandController() {
    while (!commands.empty()){
        delete commands.back();
        commands.pop_back();
    }
}

void CommandController::Execute(const std::string& str_command) {
    bool is_found = false;
    for(auto& command : commands){
        if(command->IsMatch(str_command)) {
            is_found = true;
            try {
                command->Execute(str_command);
            } catch (std::exception &exception) {
                std::cerr << exception.what() << std::endl;
            }
            break;
        }
    }
    if(!is_found){
        std::cout << "Комманда \"" << str_command << "\" не найдена.\n";
    }
}
