#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

// Declaration and mapping of commands
enum inst_bf {
    I_INC = '+',
    I_DEC = '-',
    I_INCP = '>',
    I_DECP = '<',
    I_START_LOOP = '[',
    I_END_LOOP = ']',
    I_INPUT = ',',
    I_OUTPUT = '.'
};

void compile_brainfuck(char* input) {
    char mem[1024] = {0};
    char *ptr = mem;
    while (*input != '\0') {
        switch (*input) {
            case I_INC:
                (*ptr)++;
                break;
            case I_DEC:
                (*ptr)--;
                break;
            case I_INCP:
                ptr++;
                break;
            case I_DECP:
                ptr--;
                break;
            case I_INPUT:
                scanf("%c",ptr);
                break;
            case I_OUTPUT:
                printf("%c",*ptr);
                break;
            case I_START_LOOP:
                if (*ptr == 0) {
                    int bracketCount = 1;
                    while (bracketCount > 0) {
                        input++;
                        if (*input == '[') {
                            bracketCount++;
                        } else if (*input == ']') {
                            bracketCount--;
                        }
                    }
                }
                break;
            case I_END_LOOP:
                if (*ptr != 0) {
                    int bracketCount = 1;
                    while (bracketCount > 0) {
                        input--;
                        if (*input == ']') {
                            bracketCount++;
                        } else if (*input == '[') {
                            bracketCount--;
                        }
                    }
                }
                break;
            default:
                printf("Invalid syntax at address %ld", ptr-&mem[0]);
                exit(1);
        }
        input++;
    }
}

void parseFile(FILE* input, char code[]) {
    int i = 0;
    char cur;
    while ((cur = fgetc(input)) != EOF) {
        code[i] = cur;
        i++;
    }
}
int main(int argc, char** argv) {
//    To print Hello World, use string below.
//    char* brainfuckCode = ">++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+.";
    FILE *input;
    char brainfuckCode[1024];
    input = fopen(argv[1], "r");
    if (input == 0) {
        perror("Cannot open input file\n");
    }
    parseFile(input, brainfuckCode);
//    printf("%s",brainfuckCode);
    compile_brainfuck(brainfuckCode);
    return 0;
}
