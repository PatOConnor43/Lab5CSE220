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
