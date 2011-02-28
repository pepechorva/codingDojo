/*
 *  kataromans.c++
 *  
 *
 *  Created by Pepe and Martina on 25/02/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 * 
 */

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <sstream>




#define I 1
#define IV 4
#define V 5
#define IX 9
#define X 10
#define XL 40
#define L 50
#define XC 90
#define C 100
#define CD 400
#define D 500
#define CM 900
#define M 1000

using namespace std;

//struct equivalencia {
//	string numero;
//	int numero;
//}
// IDEA PARA RECURSIVO
//vector<equivalencia> tabla;


string concatenacion(int &numero,  int definidoInt, string definidoString )
{
	string cadena ="";

	while (numero >= definidoInt)
	{
		if(numero >= definidoInt)
		{
			numero = numero - definidoInt;
			cadena+= definidoString;
		}
	}
	
	return cadena;
}

string millares(int &millar)
{
	string romano="";

	romano += concatenacion( millar, M, "M" );
		
	return romano;
}


string centenas(int &centena)
{
	string romano="";
	
	romano += concatenacion( centena, CM, "CM" );
	romano += concatenacion( centena, D, "D" );
	romano += concatenacion( centena, CD, "CD" );
	romano += concatenacion( centena, C, "C" );

	return romano;
}

string decenas(int &decena)
{
	string romano="";
	
	romano += concatenacion( decena, XC, "XC" );
	romano += concatenacion( decena, L, "L" );
	romano += concatenacion( decena, XL, "XL" );
	romano += concatenacion( decena, X, "X" );
	
	return romano;	
}
string unidades(int &unidad)
{
	string romano="";
	
	romano += concatenacion( unidad, IX, "IX" );
	romano += concatenacion( unidad, V, "V" );
	romano += concatenacion( unidad, IV, "IV" );
	romano += concatenacion( unidad, I, "I" );
	
	return romano;
}

string numeroRomano(int comprobacion)
{
	string romano="";

	romano+= millares(comprobacion);
	romano+=centenas(comprobacion);
	romano+=decenas(comprobacion);
	romano+=unidades(comprobacion);
	
	return romano;
}


bool assert(string numero,string resultado)
{
	return numero == resultado;
}


int main()
{
	
	cout <<  assert(numeroRomano(1000), "M") << endl;
	cout <<  assert(numeroRomano(2000), "MM") << endl;
	cout <<  assert(numeroRomano(3000), "MMM") << endl;
	cout <<  assert(numeroRomano(1900), "MCM") << endl;
	cout <<  assert(numeroRomano(1500), "MD") << endl;
	cout <<  assert(numeroRomano(1400), "MCD") << endl;
	cout <<  assert(numeroRomano(1100), "MC") << endl;
	cout <<  assert(numeroRomano(1350), "MCCCL") << endl;
	cout <<  assert(numeroRomano(1340), "MCCCXL") << endl;
	cout <<  assert(numeroRomano(1349), "MCCCXLIX") << endl;
	cout <<  assert(numeroRomano(1345), "MCCCXLV") << endl;
	cout <<  assert(numeroRomano(1344), "MCCCXLIV") << endl;
	cout <<  assert(numeroRomano(1343), "MCCCXLIII") << endl;
	cout <<  assert(numeroRomano(3999), "MMMCMXCIX") << endl;
	cout <<  assert(numeroRomano(1001), "MI") << endl;
	cout <<  assert(numeroRomano(5999), "MMMMMCMXCIX") << endl;

	
	return 0;
	
}

