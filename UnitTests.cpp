/*
 * Authors: Aaron Chasse, Jake Borg, Deming Liu
 * CSE 220 - Lab 4
 * 04/09/2014
 *
 * Program Description:
 * UnitTests.cpp contains methods for testing the public methods of the other classes.
 * It hardcodes sample objects along with objects created using the methods, and verifies if their results
 * are the same. Each tester method is run in main, and sends a flag for each test that fails.
 *
 */

#include "UnitTests.h"

UnitTests::UnitTests() {
	/* bTree stuff */
	a = new IdentifierToken();
	b = new IdentifierToken();
	c = new IdentifierToken();
	d = new IdentifierToken();
	a->setTokenString("a");
	b->setTokenString("b");
	c->setTokenString("c");
	d->setTokenString("d");
}
UnitTests::~UnitTests() {}
/* bTree tests */
bool UnitTests::testAddToTree() {
	tree.addIdentifier(b,1);
	tree.addIdentifier(a,0);
	tree.addIdentifier(d,3);
	tree.addIdentifier(c,2);
	if(a != b->getLeftChild()) {
		printf("addToTree left child\n");
		return 0;
	}
	if(d != b->getRightChild()) {
		printf("addToTree right child\n");
		return 0;
	}
	if(c != b->getRightChild()->getLeftChild())  {
		printf("addToTree depth of 2\n");
		return 0;
	}
	return 1;
}
bool UnitTests::testDestroyTree() { // Currently, it's the test and not the method that's broken
	delete tree;
	if(a != NULL) { printf("a not destroyed\n"); return 0; }
	if(b != NULL) { printf("b not destroyed\n"); return 0; }
	if(c != NULL) { printf("c not destroyed\n"); return 0; }
	if(d != NULL) { printf("d not destroyed\n"); return 0; }
	return 1;
}
/* LinkedList tests */
bool UnitTests::testAddToList() {
	lines.setNextLineNumber(line1);
	lines.setNextLineNumber(line1);
	lines.setNextLineNumber(line2);
	lines.setNextLineNumber(line3);
	if(lines.getNextLineNumber()->getLineNumber() != 1) { printf("depth 0 not set\n"); return 0; }
	if(lines.getNextLineNumber()->getNextLineNumber()->getLineNumber() != 1) { printf("depth 1 not set\n"); return 0; }
	if(lines.getNextLineNumber()->getNextLineNumber()->getNextLineNumber())->getLineNumber() != 2) { printf("depth 2 not set\n"); return 0; }
	if(lines.getNextLineNumber()->getNextLineNumber()->getNextLineNumber()->getNextLineNumber()->getLineNumber() != 3) { printf("depth 3 not set\n"); return 0; }
	return 1;
}
bool UnitTests::testDeleteList() {
	delete lines;
	if(lines.getLine() != 0) { printf("delete list not working"); return 0;}
	return 1; //? How to test inner nodes?
}
bool UnitTests::testSet() {
	lines.setLineNumber(17);
	if(lines.getLineNumber() != 17) {
		printf("line not set to 17");
		return 0;
	}
	return 1;
}

/* Scanner tests */
bool UnitTests::testGetToken(char source_name[], char date[], Print printer) {
	FILE *file;
	int flag = 0;
	Token *token = NULL;
	file = fopen("UnitTests.txt" , "r");
	Scanner scanner(file, source_name, date, printer);
	token = scanner.getToken();
	if(token->getTokenString().compare("identifier") != 0) {
		printf("getToken fails to get identifiers\n");
		flag = 1;
	}
	token = scanner.getToken();
	if(token->getTokenString().compare("one") != 0) {
		printf("getToken fails to get second token\n");
		flag = 1;
	}
	token = scanner.getToken();
	if(token->getTokenString().compare("two") != 0) {
		printf("getToken fails to get third token\n");
		flag = 1;
	}
	token = scanner.getToken();
	if(token->getTokenString().compare("newline") != 0) {
		printf("getToken fails for multiple lines\n");
		flag = 1;
	}
	token = scanner.getToken();
	if(token->getStringLiteral().compare("'string'") != 0) {
		printf("getToken fails for to get strings\n");
		flag = 1;
	}
	token = scanner.getToken();
	if(token->getIntLiteral() != 1234) {
		printf("getToken fails to get integers\n");
		flag = 1;
	}
	token = scanner.getToken();
	if(std::abs(token->getRealLiteral()-5.67) >= .01*5.67) {
		printf("getToken fails to get floating point numbers\n");
		flag = 1;
	}
	fclose(file);
	if(flag) { return 0; }
	return 1;
}

/* Token Tests */
bool UnitTests::testCode() {
	Token* token = new Token();
	token->setCode(IDENTIFIER);
	if(token->getCode() != IDENTIFIER) { 
		printf("Token get/setCode failed\n");
		return 0;
	}
	delete token;
	return 1;
}

bool UnitTests::testIntLiteral() {
	Token* token = new Token();
	token->setLiteral(1234);
	if(token->getIntLiteral() != 1234) { 
		printf("Token get/setIntLiteral failed\n");
		return 0;
	}
	return 1;
}
bool UnitTests::testRealLiteral() {
	Token* token = new Token();
	token->setLiteral(5.67f);
	if(abs(token->getRealLiteral()-5.67) >= .01*5.67) { 
		printf("Token get/setRealLiteral failed\n");
		return 0;
	}
	return 1;
}
bool UnitTests::testTokenString() {
	Token* token = new Token();
	token->setTokenString("string");
	if(token->getTokenString().compare("string") != 0) { 
		printf("Token get/setTokenString failed\n");
		return 0;
	}
	return 1;
}

bool UnitTests::testStringLiteral() {
	Token* token = new Token();
	token->setLiteral("string");
	if(token->getStringLiteral().compare("string") != 0) { 
		printf("Token get/setStringLiteral failed\n");
		return 0;
	}
	return 1;
}
