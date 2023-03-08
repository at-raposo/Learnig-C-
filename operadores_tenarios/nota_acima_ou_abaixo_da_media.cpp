#include <iostream>
#include <locale.h>

using namespace std;

//operadores tenarios são um if simplificado
//ele é mais simples, porém ele é mais limitado.
//podemos usar os operadores tenarios, como uma forma de implementar ou desplementar uma variavel

int main (){
    system("Color 10"); // cor do promp de comando
    setlocale(LC_ALL, " "); // 

    //(expressão) ?(se) for valor1 :(retorna) valor2;
    // se vc quiser uma função mais simples como essa, você usa o operator tenario;

    int n1,n2,n3,nota;
    string res; // aqui como é string, tem que retornar como testo, não tem como colocar como numero que não vai dar certo

    cout << "\nDigite a primeira nota:";
    cin >> n1;

    cout << "A primeira nota do aluno digitada foi de:"<<n1;


    cout << "\nDigite a segunda nota\n:";
    cin >> n2;
    cout << "A segunda nota do aluno digitado foi de:"<<n2;

    cout << "\nDigite a terceira nota\n:";
    cin >> n3;
    cout << "A segunda nota do aluno digitado foi de:"<<n3;
    
    
    nota = n1+n2+n3
    //se a nota >=60 aprovado
    //se a nota <60 reprovado

    (nota>=60) ? res="Aprovado" : res="Reprovado"; 
    // "?" é usado como 'Que situação é essa aqui galera?
    // os dois pontos representam 'ou', a mesma coisa que no C


    //temos duas formas de escritas(a apresentada na tela) e:
    //res = (nota >= 60) ? "Aprovado" : "Reprovado" // aqui estamos colocando reprovado ou aprovado como valores de retorno e não como 'respostas' do if
    
    cout << "\nA nota total do aluno foi de:"<<nota;
    cout << "\nSituacão do aluno:" << res<< "\n";
    
    return 0;
}
