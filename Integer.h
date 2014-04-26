//Vishal Mehta
//Pat O Connor
//Nash Kleppan
//Group 19
//Lab 5
//CSE 220 Spring 2014
/*
 * Integer.h
 *
 *  Created on: Apr 20, 2014
 *      Author: Patrick
 */

#ifndef INTEGER_H_
#define INTEGER_H_
#include "Token.h"

class Integer : public Token
{

	public:
		Integer() : Token()
		{
			this->setCode(NUMBER);
			this->setTokenString("");
		}
		~Integer()
		{

		}
		void print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (integer)\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};


#endif /* INTEGER_H_ */
