#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl;
    cout << "Escolha o seu nível de dificuldade" << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;

    int numero_de_tentativas;

    while(true){

        cin >> dificuldade;

        if(dificuldade == 'F'){
        numero_de_tentativas = 15;
        break;
        }
        else if(dificuldade == 'M'){
            numero_de_tentativas = 10;
            break;
        }
        else if(dificuldade == 'D'){
            numero_de_tentativas = 5;
            break;
        }
        else{
            cout << "Digite uma Letra Válida" << endl;
        }
    }

    srand(time(NULL));
    const int number = rand() % 100;
    int tentativas = 0;

    double pontos = 1000.0;

    //cout << "O numero secreto e " << number << ". Nao conte para ninguem!" << endl;

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

        if(tentativas == numero_de_tentativas){
            break;
        }
    }

    if(tentativas == numero_de_tentativas){
        cout << "" << endl;
        cout << "Fim de jogo!" << endl;
        cout << "Você Perdeu!" << endl;
    }
    else{
        cout << "" << endl;
        cout << "Fim de jogo!" << endl;
        cout << "Você acertou em " << tentativas << " tentativas!" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }

}

