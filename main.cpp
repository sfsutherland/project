//#include "AccountParsers/AccountParser.h"

#include <iostream>
#include <spdlog/spdlog.h>
#include "PROJECT_config.h"

int main(int argc, char**argv)
{
    // ReportCruncher;
    // ParserFactory;
    // FileRetriever;
    //
    // for ( accountName : accounts )
    //      Parser parser = ParserFactory.CreateParser(accountName);
    //      for ( file : FileRetriever.GetFiles(accountdir, schema) )
    //      {
    //          TransactionReport report = parser.ParseFile(file);
    //          ReportCruncher.Crunch(report);
    //      }
    // ReportCruncher.GenerateFinalReport(outputDir);

    int x = 0;
    while (x < 10)
    {
        x++;
    }
    std::cout << " x is " << x << "\n";
    spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);
    
    spdlog::warn("Easy padding in numbers like {:08d}", 12);
    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");
    
    spdlog::set_level(spdlog::level::debug); // Set global log level to debug
    spdlog::debug("This message should be displayed..");    
    
    // change log pattern
    spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
    
    // Compile time log levels
    // define SPDLOG_ACTIVE_LEVEL to desired level
    SPDLOG_TRACE("Some trace message with param {}", 42);
    SPDLOG_DEBUG("Some debug message");
    std::cout << "This is project, version " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << "\n";
    std::cout << "Source dir: " << SRC_DIR << "\nBinary dir: " << BIN_DIR << "\n";
    
    return 0;
}