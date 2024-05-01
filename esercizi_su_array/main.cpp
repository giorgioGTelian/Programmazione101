/*1.scrivere una funzione che prende un array di lunghezza length e lo
inizializza con numeri casuali compresi tra 0 e 3*length +1.*/
#include <iostream>
using namespace std;
int main() {
    //variabili
    int dimensioneArray = 8;
    int array[dimensioneArray];

    int lenghtArray = 3*dimensioneArray+1;
    for (int i = 0; i < dimensioneArray; ++i)
      {
    myArray[i] = randBetween();
    }
    //std::generate(std::begin(0), std::end(lenghtArray), randBetween);
  

    return 0;
}

/***************************************************************/
/*
2. scrivere una funzione che dato un numero binario memorizzato in un
array lo converte in decimale
*/

/***************************************************************/
/*
3. palindrome: un array di caratteri è palindromo se leggendolo da destra
verso sinistra o da sinistra verso destra si ottiene lo stesso array.
Scrivere una funzione che verifica se un array è palindromo o meno*/

/***************************************************************/
/*
4. scrivere una funzione che prende in input un array di interi a e un intero
n e ritorna true o false a seconda che n si trova in a oppure no
*/

/***************************************************************/

/*
5. scrivere una funzione che prende in input un array di interi e ne stampa
gli elementi senza stampare i duplicati
*/

/***************************************************************/
