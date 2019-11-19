//
// Created by stas on 14.11.19.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Person/Person.h"
#include "Command/CommandController.h"
#include "BinaryTools/BinaryReader.h"

void ReadBinary(){
    std::vector<Person> persons;
    BinaryReader<Person> reader("persons.bin");
    reader.Read(persons);
    for(const auto& person : persons){
        std::cout << person << std::endl;
    }
}

int main(){
    CommandController commandController;
    std::string line;
    std::cout << sizeof(std::string) << "#\n";
    while(line != "exit"){
        std::cout << "> "<< " ";
        std::getline(std::cin, line);
        commandController.Execute(line);
        std::cout << '\n';
    }

    ReadBinary();

    return 0;
}
