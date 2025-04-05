#include "ILoggerFactory.hpp"

class ErrorLoggerFactory : public ILoggerFactory {
    public:
        ILogger* createLogger()
        {
            return new ErrorLogger();
        }
};