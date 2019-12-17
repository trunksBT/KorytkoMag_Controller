#pragma once

#include <vector>
#include <string>
#include <Controller/ICommand.hpp>

class ICommandFactory
{
public:
   virtual ICommandPtr interpretAndCreateCommand(std::vector<std::string> validatedUserInput) = 0;
   virtual ~ICommandFactory() = default;
};
using ICommandFactoryPtr = std::shared_ptr<ICommandFactory>;