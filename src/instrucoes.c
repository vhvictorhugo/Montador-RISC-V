/*
	TRABALHO PRÁTICO 2 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
	Professor: José Augusto M. Nacif
	Membros:
		Matheus da Silva Alves (2649);
		Victor Hugo R. dos Santos (3510);
*/

#include "instrucoes.h"

void sub(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//teste
	//printf("sub - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0100000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("000");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void addi(int rd, int rs1, int imm){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("addi - %d - %d - %d\n",rd,rs1,imm);
	//immediate
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 12 bits como base para a conversão.
 	for(i = 11; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = imm >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("000");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0010011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void and(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("add - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0000000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("111");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void or(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("or - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0000000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("110");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void xor(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("xor - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0000000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("100");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void andi(int rd, int rs1, int imm){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("andi - %d - %d - %d\n",rd,rs1,imm);
	//immediate
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 12 bits como base para a conversão.
 	for(i = 11; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = imm >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("111");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0010011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void ori(int rd, int rs1, int imm){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("ori - %d - %d - %d\n",rd,rs1,imm);
	//immediate
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 12 bits como base para a conversão.
 	for(i = 11; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = imm >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("110");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0010011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void sll(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("sll - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0000000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("001");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void srl(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("srl - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0000000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("101");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}

void add(int rd, int rs1, int rs2){ //recebe por parametro o retorno de linha(r) + as variaveis necessárias
	//printf("add - %d - %d - %d\n",rd,rs1,rs2);
	//funct7
	printf("0000000");
	int r; // Resultado do deslocamento
 	int i; // Contador
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs2 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rs1 >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//funct3
 	printf("000");
 	// Utiliza um número de 5 bits como base para a conversão.
 	for(i = 4; i >= 0; i--) {
    	// Executa a operação shift right até a 
    	// última posição da direita para cada bit.
    	r = rd >> i;
         
    	// Por meio do "e" lógico ele compara se o valor 
    	// na posição mais à direita é 1 ou 0 
    	// e imprime na tela até reproduzir o número binário.
    	if(r & 1) {
        	printf("1");
    	} else {
        	printf("0");
    	}
 	}
 	//opcode
 	printf("0110011");
 	//salta linha para finalizar
 	printf("\n");
	// \n demarca fim da linha de operação
}


int cImmediate(char* imme){ // funcao que converte o immediate e retorna este numero
	int tam, num, controle;
	controle = 0;
	num = 0;
	tam = strlen(imme);
	if(tam == 5){
		controle = 1;
		if(imme[1] == '1'){
			num = num + 1000;
		}else if(imme[1] == '2'){
			num = num + 2000;
		}
		if (imme[2] == '0'){
			num = num + 0;
		}else if(imme[2] == '1'){
			num = num + 100;
		}else if(imme[2] == '2'){
			num = num + 200;
		}else if(imme[2] == '3'){
			num = num + 300;
		}else if(imme[2] == '4'){
			num = num + 400;
		}else if(imme[2] == '5'){
			num = num + 500;
		}else if(imme[2] == '6'){
			num = num + 600;
		}else if(imme[2] == '7'){
			num = num + 700;
		}else if(imme[2] == '8'){
			num = num + 800;
		}else if(imme[2] == '9'){
			num = num + 900;
		}
		if (imme[3] == '0'){
			num = num + 0;
		}else if(imme[3] == '1'){
			num = num + 10;
		}else if(imme[3] == '2'){
			num = num + 20;
		}else if(imme[3] == '3'){
			num = num + 30;
		}else if(imme[3] == '4'){
			num = num + 40;
		}else if(imme[3] == '5'){
			num = num + 50;
		}else if(imme[3] == '6'){
			num = num + 60;
		}else if(imme[3] == '7'){
			num = num + 70;
		}else if(imme[3] == '8'){
			num = num + 80;
		}else if(imme[3] == '9'){
			num = num + 90;
		}
		if (imme[4] == '0'){
			num = num + 0;
		}else if(imme[4] == '1'){
			num = num + 1;
		}else if(imme[4] == '2'){
			num = num + 2;
		}else if(imme[4] == '3'){
			num = num + 3;
		}else if(imme[4] == '4'){
			num = num + 4;
		}else if(imme[4] == '5'){
			num = num + 5;
		}else if(imme[4] == '6'){
			num = num + 6;
		}else if(imme[4] == '7'){
			num = num + 7;
		}else if(imme[4] == '8'){
			num = num + 8;
		}else if(imme[4] == '9'){
			num = num + 9;
		}
		num = num * (-1);
	}else if(tam == 4){
		if(imme[0] == '1'){
			num = num + 1000;
		}else if(imme[0] == '2'){
			num = num + 2000;
		}else if(imme[0] == '-'){
			controle = 1;
		}
		if(imme[1] == '1'){
			num = num + 100;
		}else if(imme[1] == '2'){
			num = num + 200;
		}else if(imme[1] == '3'){
			num = num + 300;
		}else if(imme[1] == '4'){
			num = num + 400;
		}else if(imme[1] == '5'){
			num = num + 500;
		}else if(imme[1] == '6'){
			num = num + 600;
		}else if(imme[1] == '7'){
			num = num + 700;
		}else if(imme[1] == '8'){
			num = num + 800;
		}else if(imme[1] == '9'){
			num = num + 900;
		}
		if (imme[2] == '0'){
			num = num + 0;
		}else if(imme[2] == '1'){
			num = num + 10;
		}else if(imme[2] == '2'){
			num = num + 20;
		}else if(imme[2] == '3'){
			num = num + 30;
		}else if(imme[2] == '4'){
			num = num + 40;
		}else if(imme[2] == '5'){
			num = num + 50;
		}else if(imme[2] == '6'){
			num = num + 60;
		}else if(imme[2] == '7'){
			num = num + 70;
		}else if(imme[2] == '8'){
			num = num + 80;
		}else if(imme[2] == '9'){
			num = num + 90;
		}
		if (imme[3] == '0'){
			num = num + 0;
		}else if(imme[3] == '1'){
			num = num + 1;
		}else if(imme[3] == '2'){
			num = num + 2;
		}else if(imme[3] == '3'){
			num = num + 3;
		}else if(imme[3] == '4'){
			num = num + 4;
		}else if(imme[3] == '5'){
			num = num + 5;
		}else if(imme[3] == '6'){
			num = num + 6;
		}else if(imme[3] == '7'){
			num = num + 7;
		}else if(imme[3] == '8'){
			num = num + 8;
		}else if(imme[3] == '9'){
			num = num + 9;
		}
		if (controle == 1){
			num = num * (-1);
		}
	}else if(tam == 3){
		if(imme[0] == '1'){
			num = num + 100;
		}else if(imme[0] == '2'){
			num = num + 200;
		}else if(imme[0] == '3'){
			num = num + 300;
		}else if(imme[0] == '4'){
			num = num + 400;
		}else if(imme[0] == '5'){
			num = num + 500;
		}else if(imme[0] == '6'){
			num = num + 600;
		}else if(imme[0] == '7'){
			num = num + 700;
		}else if(imme[0] == '8'){
			num = num + 800;
		}else if(imme[0] == '9'){
			num = num + 900;
		}else if(imme[0] == '-'){
			controle = 1;
		}
		if(imme[1] == '1'){
			num = num + 10;
		}else if(imme[1] == '2'){
			num = num + 20;
		}else if(imme[1] == '3'){
			num = num + 30;
		}else if(imme[1] == '4'){
			num = num + 40;
		}else if(imme[1] == '5'){
			num = num + 50;
		}else if(imme[1] == '6'){
			num = num + 60;
		}else if(imme[1] == '7'){
			num = num + 70;
		}else if(imme[1] == '8'){
			num = num + 80;
		}else if(imme[1] == '9'){
			num = num + 90;
		}
		if (imme[2] == '0'){
			num = num + 0;
		}else if(imme[2] == '1'){
			num = num + 1;
		}else if(imme[2] == '2'){
			num = num + 2;
		}else if(imme[2] == '3'){
			num = num + 3;
		}else if(imme[2] == '4'){
			num = num + 4;
		}else if(imme[2] == '5'){
			num = num + 5;
		}else if(imme[2] == '6'){
			num = num + 6;
		}else if(imme[2] == '7'){
			num = num + 7;
		}else if(imme[2] == '8'){
			num = num + 8;
		}else if(imme[2] == '9'){
			num = num + 9;
		}
		if (controle == 1){
			num = num * (-1);
		}
	}else if(tam == 2){
		if(imme[0] == '1'){
			num = num + 10;
		}else if(imme[0] == '2'){
			num = num + 20;
		}else if(imme[0] == '3'){
			num = num + 30;
		}else if(imme[0] == '4'){
			num = num + 40;
		}else if(imme[0] == '5'){
			num = num + 50;
		}else if(imme[0] == '6'){
			num = num + 60;
		}else if(imme[0] == '7'){
			num = num + 70;
		}else if(imme[0] == '8'){
			num = num + 80;
		}else if(imme[0] == '9'){
			num = num + 90;
		}else if(imme[0] == '-'){
			controle = 1;
		}
		if(imme[1] == '1'){
			num = num + 1;
		}else if(imme[1] == '2'){
			num = num + 2;
		}else if(imme[1] == '3'){
			num = num + 3;
		}else if(imme[1] == '4'){
			num = num + 4;
		}else if(imme[1] == '5'){
			num = num + 5;
		}else if(imme[1] == '6'){
			num = num + 6;
		}else if(imme[1] == '7'){
			num = num + 7;
		}else if(imme[1] == '8'){
			num = num + 8;
		}else if(imme[1] == '9'){
			num = num + 9;
		}
		if (controle == 1){
			num = num * (-1);
		}
	}else if(tam == 1){
		controle = 0;
		if(imme[0] == '0'){
			num = 0;
		}else if(imme[0] == '1'){
			num = num + 1;
		}else if(imme[0] == '2'){
			num = num + 2;
		}else if(imme[0] == '3'){
			num = num + 3;
		}else if(imme[0] == '4'){
			num = num + 4;
		}else if(imme[0] == '5'){
			num = num + 5;
		}else if(imme[0] == '6'){
			num = num + 6;
		}else if(imme[0] == '7'){
			num = num + 7;
		}else if(imme[0] == '8'){
			num = num + 8;
		}else if(imme[0] == '9'){
			num = num + 9;
		}
	}
	return num;
}

int cRegistrador(char* registrador){    // funcao que converte os registradores (retorna o numero deles para converter em binario)
	int tam,num;
	tam = strlen(registrador);
	if(tam == 1){
		if(registrador[0] == '0'){
			return 0;
		}else if(registrador[0] == '1'){
			return 1;
		}else if(registrador[0] == '2'){
			return 2;
		}else if(registrador[0] == '3'){
			return 3;
		}else if(registrador[0] == '4'){
			return 4;
		}else if(registrador[0] == '5'){
			return 5;
		}else if(registrador[0] == '6'){
			return 6;
		}else if(registrador[0] == '7'){
			return 7;
		}else if(registrador[0] == '8'){
			return 8;
		}else if(registrador[0] == '9'){
			return 9;
		}
	}else if(tam == 2){
		if(registrador[0] == '1'){
			num = 10;
		}else if(registrador[0] == '2'){
			num = 20;
		}else if(registrador[0] == '3'){
			num = 30;
		}
		if (registrador[1] == '0'){
			num = num + 0;
		}else if(registrador[1] == '1'){
			num = num + 1;
		}else if(registrador[1] == '2'){
			num = num + 2;
		}else if(registrador[1] == '3'){
			num = num + 3;
		}else if(registrador[1] == '4'){
			num = num + 4;
		}else if(registrador[1] == '5'){
			num = num + 5;
		}else if(registrador[1] == '6'){
			num = num + 6;
		}else if(registrador[1] == '7'){
			num = num + 7;
		}else if(registrador[1] == '8'){
			num = num + 8;
		}else if(registrador[1] == '9'){
			num = num + 9;
		}
	return num;
	}
}

int cFuncao(char* func){    // funcao que retorna a instrucao (para cada funcao ha um return diferente)
	if(strcmp(func,"add") == 0){
		return 1;
	}else if(strcmp(func,"addi")==0){
		return 8; 
	}else if(strcmp(func,"sub")==0){
		return 3; 
	}else if(strcmp(func,"and")==0){
		return 4; 
	}else if(strcmp(func,"or")==0){
		return 5; 
	}else if(strcmp(func,"xor")==0){
		return 6; 
	}else if(strcmp(func,"sll")==0){
		return 7; 
	}else if(strcmp(func,"srl")==0){
		return 3; 
	}else if(strcmp(func,"ori")==0){
		return 9; 
	}else if(strcmp(func,"andi")==0){
		return 10; 
	}else{
		printf("error\n");
		return 0;
	}
}
