/* Este app solicita o seu nome e idade.
 * E exibe essas informações.
 * Este programa é a refatoração do app ex1 com o uso de função*/

#include <iostream>
#include <string>

using namespace std;

string getNome(string msn)
{
  string nome;
  cout << msn;
  getline(cin, nome);
  return nome;
}

int getIdade(string msn)
{
  int idade;
  cout << msn;
  cin >> idade;
  return idade;
}

void digaOI(string nome, int idade)
{
  cout << endl << nome << " sua idade é " << idade << " anos" << endl;
}

int main(void)
{
  string nome = getNome("Entre seu nome: ");
  int idade = getIdade("Entre sua idade: ");

  digaOI(nome, idade);
  return 0;
}
