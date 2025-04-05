#pragma once

#include "ILogger.hpp"
#include "DebugLogger.hpp"
#include "ErrorLogger.hpp"
#include "InfoLogger.hpp"

class ILoggerFactory {
    public:
        virtual ILogger* createLogger() = 0;
        virtual ~ILoggerFactory(){ };
};