#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;


void caesarCipher(char x[10],int n)
{
	char y[10];
	int k;
	for(int i=0;i<(int)strlen(x);i++)
	{
		if(x[i] == (char)32)
		{
			y[i] = (char)32;
		}
		else
		{
		k = x[i] - 65;
		y[i] = (k + n)%26 + 65;
		}
	}
	puts(y);
}

void vigenere(char r[])
{
	char word[6] = "SNAKE";
	int A,B,j,k;

	char crypted[10];

	for(int i=0;i<20;i++)
	{
		j = (i+1)/5;
		if(r[i] == (char)32 )
		{
			crypted[i] = (char)32 ;
		}
		else
		{
			
			A = (int)word[j] - 64;
			B = (int)r[i] - 64;
			k = A + B;
			
			if(k > 26)
			{
				k -= 26;
				
			}
			
			crypted[i] = (char)(k+64);
		}
	}
	puts(crypted);
	
	
}



void XOR(char toEncrypt[10]) {
    char key[10] = {'K', 'C', 'Q','T','W','E','e','F','G','L'}; 
    char output[10];
    
    for (int i = 0; i < 10; i++)
    	if(toEncrypt[i] == (char)32)
    	{
    		output[i] = (char)32;
		}
		else
		{
		output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
		}
    
	puts(output);
}


void GotoXY( int x, int y)
{
   COORD coord;
   coord.X = x;
   coord.Y = y;
   SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), coord );
   
   
}

