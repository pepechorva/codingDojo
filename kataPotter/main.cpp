/*
 *  katapotter.c++
 *  
 *
 *  Created by Pepe on 28/02/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 * 
 */

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <sstream>

using namespace std;



bool assert(string numero,string resultado)
{
	return numero == resultado;
}


int main()
{
	
	cout <<  assert(numeroRomano(1000), "M") << endl;

	
	return 0;
	
}

