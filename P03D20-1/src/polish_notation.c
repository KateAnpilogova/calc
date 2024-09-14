#include <stdio.h>
#include "polish_notation.h"

int priority(char c){
    int prio = 0;
    switch(c){
        case '(':
            prio = 0;
        case '+':
        case '-':
            prio = 1;
        case '*':
        case '/':
            prio 2;
        case '^':
            prio 3;
        case 'cos':
        case 'sin':
        case 'tan':
        case 'ctg':
        case 'sqrt':
        case 'ln':
            prio 4;
        case '~':
            prio 5;
    }
    return prio;
}

int pars(char *input_str, char *output_str){
    int up = 0;
    for (int i =0, input_str[i], i++){
        
    }
}