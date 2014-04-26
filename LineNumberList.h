//Vishal Mehta
//Pat O Connor
//Nash Kleppan
//Group 19
//Lab 5
//CSE 220 Spring 2014
//
//  LineNumberList.h
//  Lab4
//
//  Created by Bryce Holton on 3/28/14.
//  Copyright (c) 2014 Bryce Holton. All rights reserved.
//

#ifndef __Lab4__LineNumberList__
#define __Lab4__LineNumberList__

#include <iostream>

class LineNumberList
{
    int lineNumber;
    LineNumberList *nextLineNumber;
    
public:
    LineNumberList();
    ~LineNumberList();
    void setLineNumber(int num);
    int getLineNumber();
    void setNextLineNumber(LineNumberList *next);
    LineNumberList *getNextLineNumber();
};

#endif /* defined(__Lab4__LineNumberList__) */
