#pragma once
#include "ILogger.hpp"

class ErrorLogger: public ILogger {
    public:
        void log(const string& msg);
};