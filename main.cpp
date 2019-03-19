#include<iostream>
#include <ctype.h>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

void editar_texto()
{
	string cadena;
	ifstream original;
	original.open("AP__15.txt",ios::in);
	if (original.fail())
	{
		cout << "nose puede abrir" << endl;
		exit(1);
	}
	//copiando el texto en un string
	while (!original.eof())
	{
		getline(original,cadena);
	}


	//todo en minusculas
	for (unsigned int i = 0; i < cadena.size(); i++)
	{
		cadena[i] = tolower(cadena[i]);
	}

	//quitando signos, y otras cosas
	for (unsigned int i = 0; i < cadena.size(); i++)
	{
		if(cadena[i]=='.' or cadena[i] == ':' or cadena[i] == '-' or cadena[i] == '_' or cadena[i] == ',' or cadena[i] == ';' or cadena[i] == '(' or cadena[i] == ')' or cadena[i] == '/' or cadena[i] == '&' or cadena[i] == '%' or
			cadena[i] == '$' or cadena[i] == '!' or cadena[i] == '¡' or cadena[i] == '¿' or cadena[i] == '?' or cadena[i] == '+' or cadena[i] == '*' or cadena[i] == '\'' or cadena[i] == '[' or cadena[i] == ']')

	}



}




int main()
{

}
