/*
 * String.h
 *
 *  Created on: Apr 20, 2014
 *      Author: patrick
 */

#ifndef STRING_H_
#define STRING_H_
#include "Token.h"

class Quotes : public Token
{

	public:
		Quotes::Quotes() : Token()
		{
			this->setCode(STRING);

		}
		Quotes::~Quotes()
		{

		}
		void Quotes::print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s\n", symbol_string, this->getTokenString());
			printf("%s", line);
		}
};

#endif /* STRING_H_ */
