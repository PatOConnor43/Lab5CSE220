/*
 * Real.h
 *
 *  Created on: Apr 20, 2014
 *      Author: patrick
 */

#ifndef REAL_H_
#define REAL_H_
#include "Token.h"

class Real : public Token
{

	public:
		Real::Real() : Token()
		{
			this->setCode(NUMBER);

		}
		Real::~Real()
		{

		}
		void Real::print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (real)\n", symbol_string, this->getTokenString());
			printf("%s", line);
		}
};



#endif /* REAL_H_ */