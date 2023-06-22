#pragma once

#include <string>
#include <filesystem>

class FileRetriever
{
public:
    FileRetriever();

    // uses schema to identify relevant files and returns a vector of file handles
    void GetFiles(const std::filesystem::path& dir,  const std::string& schema);
};