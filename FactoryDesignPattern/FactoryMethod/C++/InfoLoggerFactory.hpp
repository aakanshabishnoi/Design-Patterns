#include "ILoggerFactory.hpp"

class InfoLoggerFactory : public ILoggerFactory {
    public :
        ILogger* createLogger() {
            return new InfoLogger();
        }
};