#pragma once

#include <Controller/CmdValidationRules/ICommandValidationStrategy.hpp>
#include <Utils/TypeAliases.hpp>

class DummyScanValidationStrategy : public ICommandValidationStrategy
{
public:
   virtual ~DummyScanValidationStrategy() = default;

protected:
   virtual MaybeStrings validateInputCorrectness(Strings userInput) override;
   virtual MaybeStrings modifyIfRequired(Strings validatedUserInput) override;
};

