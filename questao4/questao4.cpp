#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void ConcatERemove (string s, string t, int k);
bool minuscula(string caracteres);

int main(int argc, char* argv[]) {
    int k;
    bool verificacao = true;
    string s, t;

    while (s.length() > 100 || s.length() < 1 || verificacao) {
        cout << "Informe a string s: ";
        cin >> s;
        verificacao = minuscula(s);
    }
    while (t.length() > 100 || t.length() < 1 || verificacao) {
        cout << "Informe a string t: ";
        cin >> t;
        verificacao = minuscula(t);
    }
    while (k > 100 || k < 1) {
        cout << "Número de operações: ";
        cin >> k;
    }

    ConcatERemove(s,t,k);

    return 0;
}

void ConcatERemove (string s, string t, int k) {
    int i, i2;
    int operacoes = 0;
    int lenS = s.length();
    int lenT = t.length();
    int minimo = min(lenS, lenT);
    
    for (i = 0; i < minimo; i++) {
        if (s[i] == t[i]) {
            continue;
        } else break;
    }
    for (i2 = i; i2< lenS; i2++) {
        s.pop_back();
        operacoes += 1;
    }
    for (i2 = i; i2< lenT; i2++) {
        s.append(1, t[i2]);
        operacoes += 1;
    }
    if (operacoes <= k) {
        cout << "\nSim" << endl;
        cout << "Foram necessárias " << operacoes << " operações para reduzir a string" << endl;
    }
    else {
        cout << "\nNão" << endl;
    }
}

bool minuscula(string caracteres) {
    bool verificacao = caracteres.find_first_not_of("abcdefghijklmnopqrstuvwxyzç") != string::npos;
    if (verificacao) {
        cerr << "Utilize apenas letras mínusculas!" << endl;
    }
    return verificacao;
}