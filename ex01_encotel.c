// Programa que lê uma expressão e retorna o número de telefone
// de acordo com uma tabela dada.

#include<stdio.h>
#include<string.h>



int main (){

    char expressao[30], tel[30];
    int length;
        
    while (scanf("%s", &expressao) != EOF){

        for (int i = 0; i < strlen(expressao); i++){

            if (expressao[i] == 'A' || expressao[i] == 'B' || expressao[i] == 'C'){

                tel[i] = '2';

            }

            else if (expressao[i] == 'D' || expressao[i] == 'E' || expressao[i] == 'F'){

                tel[i] = '3';

            }

            else if (expressao[i] == 'G' || expressao[i] == 'H' || expressao[i] == 'I'){

                tel[i] = '4';

            }

            else if (expressao[i] == 'J' || expressao[i] == 'K' || expressao[i] == 'L'){

                tel[i] = '5';

            }

            else if (expressao[i] == 'M' || expressao[i] == 'N' || expressao[i] == 'O'){

                tel[i] = '6';

            }

            else if (expressao[i] == 'P' || expressao[i] == 'Q' || expressao[i] == 'R' || expressao[i] == 'S'){

                tel[i] = '7';

            }

            else if (expressao[i] == 'T' || expressao[i] == 'U' || expressao[i] == 'V'){

                tel[i] = '8';

            }

            else if (expressao[i] == 'W' || expressao[i] == 'X' || expressao[i] == 'Y' || expressao[i] == 'Z'){

                tel[i] = '9';

            }

            else if (expressao[i] == '-'){

                tel[i] = '-';

            }

            else if (expressao[i] == '1'){

                tel[i] = '1';

            }

            else if (expressao[i] == '0'){

                tel[i] = '0';

            }
        }

       printf("%s\n", tel); 

    }

    
    
    return 0;

}

