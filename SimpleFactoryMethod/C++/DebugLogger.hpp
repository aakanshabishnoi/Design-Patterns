#pragma once

#include "ILogger.hpp"

class DebugLogger: public ILogger {
    public:
        void log(const string& msg);
};