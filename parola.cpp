#include <iostream>
#include <string>
using namespace std;

int main()
{
    string frase;
    int contavocali = 0;

    cout << "inserisci una frase: " << endl;
    getline(cin, frase);
    
    /*for(char lettera : parola){
            if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u'){
                ++contavocali;
            }
    }*/

    for(int i = 0; i<frase.length(); i++){
        char c = frase[i];
        switch(c){
            case 'a':
            ++contavocali;
                break;
            case 'e':
            ++contavocali;
                break;
            case 'i':
            ++contavocali;
                break;
            case 'o':
            ++contavocali;
                break;
            case 'u':
            ++contavocali;
                break;
                default: continue;
        }
    }
    cout << "le vocali sono: " << contavocali << endl;
    return 0;
}