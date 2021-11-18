/* Fatorial */

#include <iostream>
#include <cmath>

using namespace std;

int fatorial( int num )
{
  if (num == 0)
    return 1;
  else
    return fatorial( num - 1) * num;
}

int main( void )
{
  int n;
  cout << "Este programa calcula o fatorial de um número" << endl;
  cout << "Entre um número natural positivo: ";
  cin >> n;

  cout << "O fatorial de " << n << " é " << fatorial(n) << endl;
  return 0;
}
