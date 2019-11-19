//
// Created by stas on 18.11.19.
//

#ifndef LABBINARY_SORTCOMMAND_H
#define LABBINARY_SORTCOMMAND_H

#include <sstream>
#include <algorithm>
#include <vector>

#include "ICommand.h"

#include "../BinaryTools/BinaryReader.h"
#include "../BinaryTools/BinaryWriter.h"

#include "../Department/Department.h"

#include "DepartmentSorter.h"

class SortCommand : public ICommand {
public:
    bool IsMatch(const std::string &command) override;
    void Execute(const std::string &command) override;
};


#endif //LABBINARY_SORTCOMMAND_H
