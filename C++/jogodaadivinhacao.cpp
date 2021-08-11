#include<iostream>
using namespace std;

int main (){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;

    const int number = 42;
    int tentativas = 0;

    double pontos = 1000.0;

    cout << "O numero secreto e " << number << ". Nao conte para ninguem!" << endl;

    while(true){
        int chute;
        tentativas++;
        cout << "Tentativa: " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;

        double pontos_perdidos = abs(chute - number)/2.0;
        pontos = pontos - pontos_perdidos;

        cout << "O valor do seu chute e: " << chute << endl;

        if(chute == number){
            cout << "Parabens! Voce acertou o numero secreto" << endl;
            break;
        }
        else if(chute > number){
            cout << "Seu chute foi maior que o numero secreto!" << endl;
        }
        else{
            cout << "Seu chute foi menor que o numero secreto!" << endl;
        }

        cout << "" << endl;
    }

    cout << "" << endl;
    cout << "Fim de jogo!" << endl;
    cout << "Você acertou em " << tentativas << " tentativas!" << endl;
    cout << "Sua pontuação foi de " << pontos << " pontos." << endl;

}

