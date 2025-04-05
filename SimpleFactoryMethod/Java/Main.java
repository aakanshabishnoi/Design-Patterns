import logger.*;

public class Main {
	public static void main(String[] args) {
		ILogger debugLogger = LoggerFactory.createLogger(LogLevel.DEBUG);
		ILogger infoLogger = LoggerFactory.createLogger(LogLevel.INFO);
		ILogger errorLogger = LoggerFactory.createLogger(LogLevel.ERROR);

		debugLogger.log("This is debug logger");
		infoLogger.log("This is info logger");
		errorLogger.log("This is error logger");
	}

}