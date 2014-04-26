//Vishal Mehta
//Pat O Connor
//Nash Kleppan
//Group 19
//Lab 5
//CSE 220 Spring 2014
/*
 * String.h
 *
 *  Created on: Apr 20, 2014
 *      Author: Patrick
 */

#ifndef STRING_H_
#define STRING_H_
#include "Token.h"

class Quotes : public Token
{

	public:
		Quotes() : Token()
		{
			this->setCode(STRING);

		}
		~Quotes()
		{

		}
		void print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};

#endif /* STRING_H_ */
