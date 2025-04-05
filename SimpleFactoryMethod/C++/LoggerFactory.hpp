#pragma once
#include "ILogger.hpp"
#include "InfoLogger.hpp"
#include "ErrorLogger.hpp"
#include "DebugLogger.hpp"

class LoggerFactory {
    public:
        static ILogger* createLogger(LogLevel pLogLevel);

};