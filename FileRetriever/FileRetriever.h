#pragma once

#include <string>

class FileRetriever
{
public:
    FileRetriever();

    // uses schema to identify relevant files and returns a vector of file handles
    void GetFiles(const std::string& dir,  const std::string& schema);
};