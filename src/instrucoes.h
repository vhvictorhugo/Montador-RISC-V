/*
	TRABALHO PRÁTICO 2 DE ORGANIZAÇÃO DE COMPUTADORES I - CCF 252
	Professor: José Augusto M. Nacif
	Membros:
		Matheus da Silva Alves (2649);
		Victor Hugo R. dos Santos (3510);
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// definem campos da instrucoes a partir de seu tipo (campos como: opcode e funct3/7)
void add(int rd, int rs1, int rs2); //1
void addi(int rd, int rs1, int imm); //8
void sub(int rd, int rs1, int rs2); //3
void and(int rd, int rs1, int rs2); //4
void or(int rd, int rs1, int rs2); //5
void xor(int rd, int rs1, int rs2); //6
void sll(int rd, int rs1, int rs2); //7
void srl(int rd, int rs1, int rs2); //2
void ori(int rd, int rs1, int imm); //9
void andi(int rd, int rs1, int imm); //10

// convertem funcoes, registradores e immediate
int cFuncao(char* func);
int cRegistrador(char* registrador);
int cImmediate(char* imme);