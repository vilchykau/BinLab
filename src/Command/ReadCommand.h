//
// Created by stas on 16.11.19.
//

#ifndef LABBINARY_READCOMMAND_H
#define LABBINARY_READCOMMAND_H

#include <string>
#include <sstream>
#include <fstream>

#include "ICommand.h"
#include "../BinaryTools/BinaryReader.h"
#include "../Person/Person.h"
#include "../Department/Department.h"

class ReadCommand :public ICommand{
public:
    bool IsMatch(const std::string &command) override;
    void Execute(const std::string &command) override;
private:
    template <typename T>
    void Read(const std::string& file_name);
};

template <typename T>
void ReadCommand::Read(const std::string& file_name){
    std::vector<T> objects;
    BinaryReader<T> reader(file_name);
    reader.Read(objects);
    for(const auto& object : objects){
        std::cout << object << std::endl;
    }
}
#endif //LABBINARY_READCOMMAND_H
