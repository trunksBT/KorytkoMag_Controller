#pragma once

#include <string>
#include <Utils/TypeAliases.hpp>
#include "Controller/CmdValidationRules/ICmdValidationManager.hpp"

class DatabaseCommandValidationManager final : public ICmdValidationManager
{
public:
   explicit DatabaseCommandValidationManager(Database& db);
   virtual ~DatabaseCommandValidationManager() = default;
   MaybeStrings perform(const Strings& userInput) override;
};
