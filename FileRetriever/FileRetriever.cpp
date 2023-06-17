#include "FileRetriever.h"

FileRetriever::FileRetriever()
{

}

void FileRetriever::GetFiles(const std::filesystem::path& dir, const std::string& schema)
{
    if (!std::filesystem::exists(dir))
    {
        return;
    }
    // look in dir
    // match files in schema (try just counting them first)
    // for each match, load into a list and hand it back
}