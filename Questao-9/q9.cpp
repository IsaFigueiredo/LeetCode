# include<iostream>
using namespace std;

int main(){
    int n = 0, digito = 0, reverso = 0;
    
    cout << "Descubra se o numero e Palindrome: ";
    cin >> n;

    if(n < 0){
        cout << "Numero negativo nao pode ser considerado palindrome.";
        return 0;
    }

    int aux = n;
    while(aux > 0){
        digito = aux%10;
        reverso = reverso * 10 + digito;
        aux/=10;
    }

    if(n == reverso){
        cout << n << " pode ser lido de traz para frente como " << reverso << " logo e um numero palindrome." ;
    }else{
        cout << n << " pode ser lido de traz para frente como " << reverso << " logo nao e um numero palindrome." ;
    }

    return 0;
}