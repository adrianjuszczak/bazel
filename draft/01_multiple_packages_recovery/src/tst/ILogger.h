#ifndef LOGGER_H
#define LOGGER_H
	
	class ILogger {
	    public:
		ILogger() = default;
		virtual ~ILogger() = default;
		
		virtual void log() = 0;
	};

#endif 
