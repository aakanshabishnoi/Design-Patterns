#include "ILoggerFactory.hpp"
#include "ILogger.hpp"

class DebugLoggerFactory: public ILoggerFactory {
    public:
         ILogger* createLogger() {
                    return new DebugLogger();
                }
};