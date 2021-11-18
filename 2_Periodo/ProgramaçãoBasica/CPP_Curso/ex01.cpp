/* Este app solicita o seu nome e idade.
 * E exibe essas informações */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string nome;
  cout << "Entre seu nome: ";
  getline(cin, nome);

  int idade;
  cout << "Prezado " << nome << " digite sua idade: ";
  cin >> idade;

  cout << nome << " sua idade é " << idade << endl;
  return 0;
}
