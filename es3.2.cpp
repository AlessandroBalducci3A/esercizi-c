#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    string risposta, risposta2, risposta3;
    int km;
    double tot;
    string continuare = "si";

    while(continuare!="no"){

        cout << "inserisci auto, moto - benzina, diesel, elettrico - i km" << endl;
        cin >> risposta;
        cin >> risposta2;
        cin >> km;

    if(risposta=="auto"){
        if(risposta2=="benzina"){
            tot = 0.15*km;}
        else if(risposta2=="diesel"){
            tot = 0.13*km;}
        else if(risposta2=="elettrico"){
            tot = 0.08*km;}}

    else if(risposta=="moto"){
        if(risposta2=="benzina"){
            tot = 0.07*km;}
        else if(risposta2=="elettrico"){
            tot = 0.04*km;}}

        cout << tot << endl;
        cout << "vuoi inserire un altro veicolo?: " << endl;
        cin >> continuare;
    }
    return 0;
}


