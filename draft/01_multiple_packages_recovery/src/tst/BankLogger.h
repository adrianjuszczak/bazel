#ifndef BANKLOGGER_H
#define BANKLOGGER_H

#include "ILogger.h" 

	namespace anjk {
		class BankLogger : public ILogger {
		    public:
		       	BankLogger() = default;
			~BankLogger() = default;
			void log() override;
			
		};
		
	} // anjk 

#endif
