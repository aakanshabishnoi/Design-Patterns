#include <iostream>
#include "LoggerFactory.hpp"
#include "common.hpp"

using namespace std;

int main() {

    ILogger* debugLogger = LoggerFactory::createLogger(LogLevel::DEBUG);
    ILogger* infoLogger = LoggerFactory::createLogger(LogLevel::INFO);
    ILogger* errorLogger = LoggerFactory::createLogger(LogLevel::ERROR);

    debugLogger->log("debug log");
    errorLogger->log("error log");
    infoLogger->log("info log");

    delete debugLogger;
    delete infoLogger;
    delete errorLogger;

    return 0;
}