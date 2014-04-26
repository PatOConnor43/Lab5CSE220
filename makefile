#Nash Kleppan
#Vishal Mehta
#Patrick OConnor
#Group 19
#CSE 220 Spring 2014
#makefile
#Lab4
#This is the makefile

CrossReference: main.o Identifier.o IdentifierBinaryTree.o LineNumberList.o Print.o Scanner.o Token.o
				g++ main.o Identifier.o IdentifierBinaryTree.o LineNumberList.o Print.o Scanner.o Token.o -o CrossReference

main.o: main.cpp
	g++ -c main.cpp
	
Identifier.o: Identifier.cpp
	g++ -c Identifier.cpp

IdentifierBinaryTree.o: IdentifierBinaryTree.cpp
	g++ -c IdentifierBinaryTree.cpp
	
LineNumberList.o: LineNumberList.cpp
	g++ -c LineNumberList.cpp
	
Print.o: Print.cpp
	g++ -c Print.cpp

Scanner.o: Scanner.cpp
	g++ -c Scanner.cpp

Token.o: Token.cpp
	g++ -c Token.cpp
	
clean:
	rm -rf *.o