//
// Created by stas on 15.11.19.
//

#include "HelpCommand.h"

bool HelpCommand::IsMatch(const std::string &command){
    return command == "help";
}

void HelpCommand::Execute(const std::string &command) {
    std::cout << "Список комманд: \n"
              << "help    Получить список комманд\n"
              << "convert {per|dep} {in_file_ name} {out_file_name}    конвертировать текстовый фаил в бинарный\n"
              << "read {per|dep|merged} {file_name}    прочитать файл\n"
              << "sort {per|dep} {file_name} сортирует файл\n";
};
