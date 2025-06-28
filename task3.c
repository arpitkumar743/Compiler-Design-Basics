#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

// basic list of keywords
char *keyList[] = {
    "int", "float", "char", "if", "else", "while", "for", "return", "void", "double"
};

// check if given word is a keyword
int isKeyword(char word[]) {
    for (int k = 0; k < 10; k++) {
        if (strcmp(word, keyList[k]) == 0) {
            return 1;
        }
    }
    return 0;
}

// check if a character is an operator
int isOperator(char ch) {
    char ops[] = "+-*/=%><";
    for (int j = 0; ops[j] != '\0'; j++) {
        if (ch == ops[j]) {
            return 1;
        }
    }
