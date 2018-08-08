// Programa que lê uma expressão e retorna o número de telefone
// de acordo com uma tabela dada.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char expressao[30];
int length;

void main (){

    printf ('Digite uma expressão: ');
    scanf ('%s', &expressao);
    toupper (expressao);
    length = strlen (expressao);

    for (int i = 0; i < length; i++){

        if (expressao[i] == 'A' || 'B' || 'C'){

            expressao[i] = '2';

        }

        else if (expressao[i] == 'D' || 'E' || 'F'){

            expressao[i] = '3';

        }

        else if (expressao[i] == 'G' || 'H' || 'I'){

            expressao[i] = '4';

        }

        else if (expressao[i] == 'J' || 'K' || 'L'){

            expressao[i] = '5';

        }

        else if (expressao[i] == 'M' || 'N' || 'O'){

            expressao[i] = '6';

        }

        else if (expressao[i] == 'P' || 'Q' || 'R' || 'S'){

            expressao[i] = '7';

        }

        else if (expressao[i] == 'T' || 'U' || 'V'){

            expressao[i] = '8';

        }

        else if (expressao[i] == 'W' || 'X' || 'Y' || 'Z'){

            expressao[i] = '9';

        }

        else if (expressao[i] = '-'){

            expressao[i] = '-';

        }

        else if (expressao[i] = '1'){

            expressao[i] = '1';

        }

        else if (expressao[i] = '0'){

            expressao[i] = '0';

        }
    }

    printf('O número de telefone correspondente é: %s', expressao);

}

