#include <bits/stdc++.h>

using namespace std;

int main () {

    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);

    cout << "salario da primeira pessoa: ";
    cin >> salario1;

    cout << endl << endl;

    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "salario da segunda pessoa: ";
    cin >> salario2;

    cout << endl << endl;

    cout << "Escreva uma idade: ";
    cin >> idade;

    cout << "Digite um sexo F/M: ";
    cin >> sexo;

    cout << endl << endl;

    cout << fixed << setprecision (2);

    cout << "Nome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;

    cout << endl << endl;

    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;

    cout << endl << endl;

    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;








   return 0;

}
