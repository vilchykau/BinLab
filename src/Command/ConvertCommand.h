//
// Created by stas on 15.11.19.
//

#ifndef LABBINARY_CONVERTCOMMAND_H
#define LABBINARY_CONVERTCOMMAND_H

#include <sstream>

#include "ICommand.h"

#include "../Person/Person.h"
#include "../Department/Department.h"
#include "../BinaryTools/BinaryWriter.h"

class ConvertCommand : public ICommand{
public:
    bool IsMatch(const std::string &command) override;
    void Execute(const std::string &command) override;
private:
    template <typename T>
    void Convert(const std::string& in_file_name,
                      const std::string& out_file_name);
};

template<typename T>
void ConvertCommand::Convert(const std::string &in_file_name,
                             const std::string &out_file_name) {
    std::ifstream ifstream(in_file_name);
    T object;
    BinaryWriter<T> writer(out_file_name);

    while(ifstream >> object) {
        writer.Write(object);
    }
}
#endif //LABBINARY_CONVERTCOMMAND_H
