/*
	TRABALHO PRÁTICO 2 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
	Professor: José Augusto M. Nacif
	Membros:
		Matheus da Silva Alves (2649);
		Victor Hugo R. dos Santos (3510);
*/


#include "src/instrucoes.h"

int main(){
	//declaração de variaveis
	int x1,x2,rd,immediate,i,tfuncao,count,controleFunc;
	i = 0;
	count = 0;
	char funct[5],regD[3],reg1[3],reg2[3], imme[5], c;
	FILE *fp;
	//abre arquivo
	fp = fopen("comandos.asm","rt");

	if (fp == NULL){
		//caso de error de abertura cancela a execução
		printf("Erro em abertura de arquivo\n");
		exit(1);
	}else{		
		//laço de repetição para pegar caracter por caracter
		//definir qual função usar
		//definir os valores inteiros dos endereços repassados
		while(!feof(fp)){
			fscanf(fp,"%c",&c);
  				if (count == 0){
	  				if(c == 'a'){
	  					funct[i] = 'a'; 
						i++;
	  				}else if(c == 'd'){
	  					funct[i] = 'd';
						i++;
	  				}else if(c == 's'){
	  					funct[i] = 's'; 
						i++;
	  				}else if(c == 'u'){
	  					funct[i] = 'u';
						i++;
	  				}else if(c == 'b'){
	  					funct[i] = 'b';
						i++;
	  				}else if(c == 'n'){
	  					funct[i] = 'n';
						i++;
	  				}else if(c == 'o'){
	  					funct[i] = 'o'; 
						i++;
	  				}else if(c == 'r'){
	  					funct[i] = 'r'; 
						i++;
	  				}else if(c == 'x'){
	  					funct[i] = 'x';
						i++;
	  				}else if(c == 'l'){
	  					funct[i] = 'l'; 
						i++;
	  				}else if(c == 'i'){
	  					funct[i] = 'i'; 
						i++;
					}else if(c == ' '){
	  					funct[i] = '\0';
						i = 0;
						tfuncao = cFuncao(funct);
						if(tfuncao == 0){
							i = -1;
						}else if((tfuncao<8)&&(tfuncao != 0)){
							controleFunc = 0;
						}else{
							controleFunc = 1;
						}

						count++;
					}
				}else if(count == 1){
					if(c == '0'){
						regD[i] = '0'; 
						i++;
					}else if(c == '1'){
	  					regD[i] = '1';
						i++;
					}else if(c == '2'){
						regD[i] = '2';
						i++;
					}else if(c == '3'){
						regD[i] = '3';
						i++;
					}else if(c == '4'){
						regD[i] = '4';
						i++;
					}else if(c == '5'){
						regD[i] = '5'; 
						i++;
					}else if(c == '6'){
						regD[i] = '6'; 
						i++;
					}else if(c == '7'){
						regD[i] = '7'; 
						i++;
					}else if(c == '8'){
						regD[i] = '8'; 
						i++;
					}else if(c == '9'){
						regD[i] = '9';
						i++;
					}else if(c == ' '){
	  					regD[i] = '\0';
						i = 0;
						rd = cRegistrador(regD);
						count++;
					}
  				}else if(count == 2){
					if(c == '0'){
						reg1[i] = '0'; 
						i++;
					}else if(c == '1'){
	  					reg1[i] = '1';
						i++;
					}else if(c == '2'){
						reg1[i] = '2'; 
						i++;
					}else if(c == '3'){
						reg1[i] = '3'; 
						i++;
					}else if(c == '4'){
						reg1[i] = '4';
						i++;
					}else if(c == '5'){
						reg1[i] = '5'; 
						i++;
					}else if(c == '6'){
						reg1[i] = '6';
						i++;
					}else if(c == '7'){
						reg1[i] = '7';
						i++;
					}else if(c == '8'){
						reg1[i] = '8'; 
						i++;
					}else if(c == '9'){
						reg1[i] = '9'; 
						i++;
					}else if(c == ' '){
	  					reg1[i] = '\0';
						i = 0;
						x1 = cRegistrador(reg1);
						count++;
					}
  				}else if((count == 3) && (controleFunc == 0)){
					if(c == '0'){
						reg2[i] = '0'; 
						i++;
					}else if(c == '1'){
	  					reg2[i] = '1'; 
						i++;
					}else if(c == '2'){
						reg2[i] = '2';
						i++;
					}else if(c == '3'){
						reg2[i] = '3';
						i++;
					}else if(c == '4'){
						reg2[i] = '4';
						i++;
					}else if(c == '5'){
						reg2[i] = '5'; 
						i++;
					}else if(c == '6'){
						reg2[i] = '6'; 
						i++;
					}else if(c == '7'){
						reg2[i] = '7';
						i++;
					}else if(c == '8'){
						reg2[i] = '8'; 
						i++;
					}else if(c == '9'){
						reg2[i] = '9';
						i++;
					}else if(c == '\n'){
	  					reg2[i] = '\0';
						i = 0;
						x2 = cRegistrador(reg2);
						count = 0;
						//finaliza linha
						if(tfuncao == 1){
			  				add(rd,x1,x2);
			  			}else if(tfuncao == 2){
			  				srl(rd,x1,x2);
			  			}else if(tfuncao == 3){
			  				sub(rd,x1,x2);
			  			}else if(tfuncao == 4){
			  				and(rd,x1,x2);
			  			}else if(tfuncao == 5){
			  				or(rd,x1,x2);
			  			}else if(tfuncao == 6){
			  				xor(rd,x1,x2);
			  			}else if(tfuncao == 7){
			  				sll(rd,x1,x2);
			  			}else if(tfuncao == 8){
			  				addi(rd,x1,immediate);
			  			}else if(tfuncao == 9){
			  				ori(rd,x1,immediate);
			  			}else if(tfuncao == 10){
			  				andi(rd,x1,immediate);
			  			}
			  			for(i=4;i>=0;i--){ // limpa strings
			  				funct[i] = '\0';
			  				imme[i] = '\0';
			  				if(i < 3){
			  					regD[i] = '\0';
			  					reg1[i] = '\0';
			  					reg2[i] = '\0';
			  				}
			  			}
			  			i=0;
			  			count = 0;
			  		}
  				}else if((count == 3) && (controleFunc == 1)){
					if(c == '0'){
						imme[i] = '0';
						i++;
					}else if(c == '1'){
	  					imme[i] = '1'; 
						i++;
					}else if(c == '2'){
						imme[i] = '2';
						i++;
					}else if(c == '3'){
						imme[i] = '3'; 
						i++;
					}else if(c == '4'){
						imme[i] = '4'; 
						i++;
					}else if(c == '5'){
						imme[i] = '5';
						i++;
					}else if(c == '6'){
						imme[i] = '6';
						i++;
					}else if(c == '7'){
						imme[i] = '7'; 
						i++;
					}else if(c == '8'){
						imme[i] = '8'; 
						i++;
					}else if(c == '9'){
						imme[i] = '9';
						i++;
					}else if(c == '-'){
						imme[i] = '-';
						i++;
					}else if(c == '\n'){
	  					imme[i] = '\0';
						i = 0;
						immediate = cImmediate(imme);
						count = 0;
						//finaliza linha
						if(tfuncao == 1){
			  				add(rd,x1,x2);
			  			}else if(tfuncao == 2){
			  				srl(rd,x1,x2);
			  			}else if(tfuncao == 3){
			  				sub(rd,x1,x2);
			  			}else if(tfuncao == 4){
			  				and(rd,x1,x2);
			  			}else if(tfuncao == 5){
			  				or(rd,x1,x2);
			  			}else if(tfuncao == 6){
			  				xor(rd,x1,x2);
			  			}else if(tfuncao == 7){
			  				sll(rd,x1,x2);
			  			}else if(tfuncao == 8){
			  				addi(rd,x1,immediate);
			  			}else if(tfuncao == 9){
			  				ori(rd,x1,immediate);
			  			}else if(tfuncao == 10){
			  				andi(rd,x1,immediate);
			  			}
			  			for(i=4;i>=0;i--){ // limpa strings
			  				funct[i] = '\0';
			  				imme[i] = '\0';
			  				if(i < 3){
			  					regD[i] = '\0';
			  					reg1[i] = '\0';
			  					reg2[i] = '\0';
			  				}
			  			}
			  			i=0;
			  			count = 0;
					}
  				}  			
		}
	}
	return 0;
}