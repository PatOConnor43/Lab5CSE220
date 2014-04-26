//Vishal Mehta
//Pat O Connor
//Nash Kleppan
//Group 19
//Lab 5
//CSE 220 Spring 2014
/*
 * Real.h
 *
 *  Created on: Apr 20, 2014
 *      Author: Patrick
 */

#ifndef REAL_H_
#define REAL_H_
#include "Token.h"

class Real : public Token
{

	public:
		Real() : Token()
		{
			this->setCode(NUMBER);

		}
		~Real()
		{

		}
		void print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (real)\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};



#endif /* REAL_H_ */
