#include <iostream>
#include "ILoggerFactory.hpp"
#include "DebugLoggerFactory.hpp"
#include "InfoLoggerFactory.hpp"
#include "ErrorLoggerFactory.hpp"

using namespace std;

int main() {

    ILoggerFactory* debugLoggerFactory = new DebugLoggerFactory();
    ILogger* debugLogger = debugLoggerFactory->createLogger();


    ILoggerFactory* infoLoggerFactory = new InfoLoggerFactory();
    ILogger* infoLogger = infoLoggerFactory->createLogger();

    ILoggerFactory* errorLoggerFactory = new ErrorLoggerFactory();
    ILogger* errorLogger = errorLoggerFactory->createLogger();

    debugLogger->log("This is debug logger");
    infoLogger->log("This is info logger");
    errorLogger->log("This is error logger");

    return 0;
}