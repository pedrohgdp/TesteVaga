#include <bits/stdc++.h> 
using namespace std;

int main(){
    string palavra = "pAra";
    int quant_a = 0;
    bool existe_a = false;
    
    for(int i = 0; i < palavra.length(); i++){
        if(palavra[i] == 'a' || palavra[i] == 'A'){
            quant_a++;
            existe_a = true;
        }
    }

    if(existe_a == true){
        cout << "Existe a na palavra" << endl;
        cout << "A quantidade de vezes que a aparece e: " << quant_a << " " << endl;
    }else{
        cout << "Nao existe letra a na palavra!" << endl;
    }

    return 0;
}