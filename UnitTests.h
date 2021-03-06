/*
*Authors: Aaron Chasse, Jake Borg, Deming Liu
*CSE 220 - Lab 5
*04/27/2014
*
*Program Description: UnitTests.h
*Header file contains the UnitTests class definition.
*
*
*/

#ifndef _Lab4_UnitTests
#define _Lab4_UnitTests

#include <stdlib.h>
#include <iostream>
#include <cmath>
#include "common.h"
#include "Print.h"
#include "Scanner.h"
#include "IdentifierToken.h"
#include "IdentifierBinaryTree.h"
#include "LineNumberList.h"

using namespace std;

class UnitTests {
	public: 
		UnitTests();
		~UnitTests();
		/* Scanner tests */
		bool testGetToken(char source_name[], char date[], Print printer);

		/* IdentifierBinaryTree tests */
		bool testAddToTree();
		bool testDestroyTree();
		bool testPrintTree();

		/* LineNumberList tests */
		bool testAddToList();
		bool testPrintList();
		bool testDeleteList();
		bool testSet();

		/* Token tests (includes tests of Literal Template class) */
		bool testCode();
		bool testIntLiteral();
		bool testRealLiteral();
		bool testStringLiteral();
		bool testTokenString();


	private:
		LineNumberList lines;
		
		LineNumberList lines1;
		lines1.setLineNumber(1);
		
		LineNumberList lines2;
		lines2.setLineNumber(2);
		
		LineNumberList lines3;
		lines3.setLineNumber(3);
		
		IdentifierBinaryTree tree;
		IdentifierToken *a;
		IdentifierToken *b;
		IdentifierToken *c;
		IdentifierToken *d;
};

#endif
