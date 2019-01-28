#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<cwchar>
#include"cryptor.h"
using namespace std;
int main()
{
	system("color F0");
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   
	cfi.dwFontSize.Y = 29;                  
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas"); 
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	GotoXY(40,10);
	char x[10];
	cout << "WELCOME TO ENCYPTOR";	
	getch();
	system("cls");
	GotoXY(25,10);
	cout << "Enter a sentence: ";
	gets(x);
	GotoXY(25,12);
	cout << "  Caesar Ciphered: ";
 	caesarCipher(x,2);
 	GotoXY(25,13);
 	cout << "Vigenere Ciphered: ";
 	vigenere(x);
 	GotoXY(25,14);
 	cout << "     Xor Ciphered: ";
 	XOR(x);
}
