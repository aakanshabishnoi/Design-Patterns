#pragma once

#include <iostream>
using namespace std;

class ILogger {

    public:
        virtual void log(const string& msg) = 0;
        virtual ~ILogger() {}
};