/*
 * String.h
 *
 *  Created on: Apr 20, 2014
 *      Author: patrick
 */

#ifndef STRING_H_
#define STRING_H_
#include "Token.h"

class String : public Token
{

	public:
		String::String() : Token()
		{
			this->setCode(STRING);

		}
		String::~String()
		{

		}
		void String::print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (real)\n", symbol_string, this->getTokenString());
			printf("%s", line);
		}
};

#endif /* STRING_H_ */
