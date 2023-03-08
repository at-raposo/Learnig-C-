#include <iostream>
#include <locale.h>

using namespace std;

int main (){

    int n1,x;
    x=5;

    cout << "\nO seu valor inicial e de: >>5<< \n Sabendo que, se digitar um valor:\n- Maior que 5, ira ser adicionado +1\n- Menor que 5, ira ser subtraido -1\n";
    
    cout << "\nDigite um valor nota:";
    cin >> n1;

    cout << "O valor digitado foi:"<<n1;

    (n1>=5) ? x++ : x--; //se o valor digitado foi maior que 5, ele coloca +1, se não, ele tira +1

    cout << "\nO valor digitado foi convertido para:"<<x;

    return 0;
}
