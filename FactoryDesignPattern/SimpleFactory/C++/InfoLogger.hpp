#pragma once
#include "ILogger.hpp"

class InfoLogger : public ILogger {
    public:
        void log(const string& msg);
};