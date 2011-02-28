#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <sstream>


#define FIZZ "Fizz"
#define BUZZ "Buzz"

#define FIZZ_NUMBER 3
#define BUZZ_NUMBER 5

using namespace std;




string funcionFizzBuzz(int numero)
{
    stringstream salida;
    bool esNumeroFizz = !(numero % FIZZ_NUMBER);
    bool esNumeroBuzz = !(numero % BUZZ_NUMBER);

    if(esNumeroFizz)
    {
        salida << FIZZ;
    }
    if(esNumeroBuzz)
    {
        salida << BUZZ;
    }
    if(!esNumeroFizz && !esNumeroBuzz)
    {
        salida << numero;
    }

    return salida.str();
}


string fizzBuzz(int numero)
{
    stringstream salida;
    
    salida << funcionFizzBuzz(numero);
    
    return salida.str();
}

void assert(string esperado, string resultado)
{
  if(esperado == resultado)
  {
      cout << "el resultado es el esperado: " << esperado <<endl;
  }
  else
  {
     cout << "el resultado es erroneo, esperado; " << esperado << "  resultado; " << resultado <<endl;
  }
}


int main()
{

    assert("1", fizzBuzz(1));
    assert("2", fizzBuzz(2));
    assert("Fizz",fizzBuzz(3));
    assert("4", fizzBuzz(4));
    assert("Buzz", fizzBuzz(5));
    assert("Fizz",fizzBuzz(6));
    assert("7", fizzBuzz(7));
    assert("8", fizzBuzz(8));
    assert("Fizz", fizzBuzz(9));
    assert("Buzz", fizzBuzz(10));
    assert("FizzBuzz", fizzBuzz(15));
    
    return 0;
}

