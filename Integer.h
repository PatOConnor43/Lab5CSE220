/*
 * Integer.h
 *
 *  Created on: Apr 20, 2014
 *      Author: patrick
 */

#ifndef INTEGER_H_
#define INTEGER_H_
#include "Token.h"

class Integer : public Token
{

	public:
		Integer::Integer() : Token()
		{
			this->setCode(NUMBER);
			this->setTokenString("");
		}
		Integer::~Integer()
		{

		}
		void Integer::print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (real)\n", symbol_string, this->getTokenString());
			printf("%s", line);
		}
};


#endif /* INTEGER_H_ */
