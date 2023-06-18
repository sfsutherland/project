//#include "AccountParsers/AccountParser.h"

#include <iostream>
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
    return 0;
}