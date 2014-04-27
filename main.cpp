/*
 *Authors: Aaron Chasse, Jake Borg, Deming Liu
 *CSE 220 - Lab 5
 *04/27/2014
 *
 *Program Description: main.cpp
 *Takes a file containing text as a parameter. Opens the file and creates a new Scanner object to iterate 
 *through the file line by line tokenizing the text. A pointer to the new token is returned from Scanner
 *and its type is checked to see if it is an identifer. If it is an identifer, the binary tree object determines
 *where in the tree it should be placed based on alphabetical precedence. If the token is not an identifer
 *it is deleted by called in the deconstructor and freeing the memory. When a period '.' is reached, signifying
 *the end of file, the binary tree is printed and each token is deleted. Then the final period token is deleted
 *and the source file is closed.
 *
 *Created by Bryce Holton.
 *
*/



#include <iostream>
#include "common.h"
#include "Print.h"
#include "Scanner.h"
#include "IdentifierToken.h"
#include "IdentifierBinaryTree.h"

FILE *init_lister(const char *name, char source_file_name[], char dte[]);
void quit_scanner(FILE *src_file, Token *list);
void add_token_to_list(Token *list, Token *new_token);

int main(int argc, const char * argv[])
{
    Token *token = NULL;
    IdentifierToken *id_token = NULL;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    FILE *source_file = init_lister(argv[1], source_name, date);
    Print print(source_name, date);
    Scanner scanner(source_file, source_name, date, print);
    IdentifierBinaryTree tree;
    
    do
    {
        token = scanner.getToken();
        print.printToken(token);
        if (token->getCode() == IDENTIFIER)
        {
            //dynamic cast base type 'Token' pointer to 'IdentifierToken'
            //to add to binary tree. Scanner must have returned base pointer to an object that 
            //was allocated as an 'IdentifierToken' type for this to work, otherwise 
            //id_token == 0 after the dynamic_cast. 
            id_token = dynamic_cast<IdentifierToken*>(token);
            tree.addIdentifier(id_token, scanner.getLineNumber());
        }
        else if (token->getCode() != PERIOD && token->getCode() != END_OF_FILE)
        {
            delete token;
        }
    }
    while (token->getCode() != PERIOD && token->getCode() != END_OF_FILE);
    
    print.printTree(tree.getTreeRoot());
    delete token;
    fclose(source_file);
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    FILE *file;
    
    strcpy(source_file_name, name);
    file = fopen(source_file_name, "r");
    time(&timer);
    strcpy(dte, asctime(localtime(&timer)));
    return file;
}

