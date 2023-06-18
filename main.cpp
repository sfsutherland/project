//#include "AccountParsers/AccountParser.h"

#include <iostream>
#include <boost/log/trivial.hpp>
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
    std::cout << "This is project, version " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << "\n";
    std::cout << "Source dir: " << SRC_DIR << "\nBinary dir: " << BIN_DIR << "\n";

    BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
    BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    BOOST_LOG_TRIVIAL(info) << "An informational severity message";
    BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
    BOOST_LOG_TRIVIAL(error) << "An error severity message";
    BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";
    
    return 0;
}