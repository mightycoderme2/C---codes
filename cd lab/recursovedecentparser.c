#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
// Define a global variable to store the current position in the input string.
int pos;

// Define the function prototypes for the parser functions.
int parse_expr(char* input);
int parse_term(char* input);
int parse_factor(char* input);

// Define the main function that calls the parser and prints the result.
int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: %s <expression>\n", argv[0]);
        return 1;
    }
    char* input = argv[1];
    int result = parse_expr(input);
    if (pos != strlen(input)) {
        printf("Invalid expression\n");
        return 1;
    }
    printf("%d\n", result);
    return 0;
}

// Define the parse_expr function that parses expressions.
int parse_expr(char* input) {
    int result = parse_term(input);
    while (input[pos] == '+' || input[pos] == '-') {
        char op = input[pos];
        pos++;
        int term = parse_term(input);
        if (op == '+') {
            result += term;
        } else {
            result -= term;
        }
    }
    return result;
}

// Define the parse_term function that parses terms.
int parse_term(char* input) {
    int result = parse_factor(input);
    while (input[pos] == '*' || input[pos] == '/') {
        char op = input[pos];
        pos++;
        int factor = parse_factor(input);
        if (op == '*') {
            result *= factor;
        } else {
            if (factor == 0) {
                printf("Division by zero\n");
                exit(1);
            }
            result /= factor;
        }
    }
    return result;
}

// Define the parse_factor function that parses factors.
int parse_factor(char* input) {
    int result = 0;
    if (isdigit(input[pos])) {
        while (isdigit(input[pos])) {
            result = result * 10 + (input[pos] - '0');
            pos++;
        }
    } else if (input[pos] == '(') {
        pos++;
        result = parse_expr(input);
        if (input[pos] != ')') {
            printf("Unbalanced parentheses\n");
            exit(1);
        }
        pos++;
    } else {
        printf("Invalid factor\n");
        exit(1);
    }
    return result;
}

