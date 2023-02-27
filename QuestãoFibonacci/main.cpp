#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Digite um numero inteiro: ";
  cin >> num;

  int a = 0, b = 1, c;
  while (b < num) {
    c = a + b;
    a = b;
    b = c;
  }

  if (num == b) {
    cout << "O numero " << num << " pertence a sequencia de Fibonacci." << endl;
  } else {
    cout << "O numero " << num << " nao pertence a sequencia de Fibonacci." << endl;
  }

  return 0;
}