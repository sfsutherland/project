#pragma once
#include "AccountParser.h"

class UsaaParser : public AccountParser
{

public:
    UsaaParser();
    ~UsaaParser();

    virtual void ProcessFile() override;
};