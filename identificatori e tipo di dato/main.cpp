/*
1. Scambio di Valori tra Due Variabili char
Nel caso di variabili di tipo char, è necessario utilizzare un terzo identificatore temporaneo per lo scambio dei valori. Ecco come farlo:
*/
#include <iostream>
using namespace std;

int main() {
    char x, y, temp;
    cin >> x >> y;

    // Scambio dei valori
    temp = x;
    x = y;
    y = temp;

    cout << x << y;

    return 0;
}
/*
2. Programma che Stampa in Modo Invertito Tre Reali
Questo programma prenderà in input tre numeri reali (ad esempio, di tipo double) e li stamperà in ordine inverso:
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // Stampa in ordine inverso
    cout << c << " " << b << " " << a << endl;

    return 0;
}
/* 3. Calcolo dell'Area di un Cerchio
 */
#include <iostream>
#include <cmath> // Per usare M_PI e pow
using namespace std;

int main() {
    double raggio, area;

    // Prende in input il raggio
    cin >> raggio;

    // Calcola l'area del cerchio
    area = M_PI * pow(raggio, 2);

    // Stampa l'area
    cout << "Area del cerchio: " << area << endl;

    return 0;
}
/*
4. Programma per Calcolare il Cambio in Monete
Questo programma calcola il numero minimo di monete necessarie per comporre un dato importo in euro.

*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double importo;
    int centesimi, monete;

    // Array che rappresenta i valori delle monete in centesimi
    int valori_monete[] = {200, 100, 50, 20, 10, 5, 2, 1};

    cin >> importo;
    centesimi = round(importo * 100); // Conversione in centesimi

    for (int valore : valori_monete) {
        monete = centesimi / valore;
        centesimi %= valore;

        if (monete > 0) {
            cout << "Monete da " << valore / 100.0 << " euro: " << monete << endl;
        }
    }

    return 0;
}
/*
5. Lunghezza dell'Ipotenusa in un Triangolo Rettangolo
Questo programma calcola la lunghezza dell'ipotenusa di un triangolo rettangolo dati i cateti.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cateto1, cateto2, ipotenusa;

    cin >> cateto1 >> cateto2;
    ipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "Lunghezza dell'ipotenusa: " << ipotenusa << endl;

    return 0;
}
/*
6. Programma per Età e Sesso
Questo programma chiede all'utente la propria età e sesso, e poi li stampa.
*/
#include <iostream>
using namespace std;

int main() {
    int eta;
    char sesso;

    cout << "Inserisci la tua età e sesso (M/F): ";
    cin >> eta >> sesso;

    cout << "Età: " << eta << ", Sesso: " << sesso << endl;

    return 0;
}
/*
7. Versione Ottimizzata del Programma Precedente
Qui, utilizzeremo una singola istruzione cin e una singola cout.

*/
#include <iostream>
using namespace std;

int main() {
    int eta;
    char sesso;

    cout << "Inserisci la tua età e sesso (M/F): ";
    cin >> eta >> sesso;
    cout << "Età: " << eta << ", Sesso: " << sesso << endl;

    return 0;
}
/*
8. Area di un Triangolo
Questo programma calcola l'area di un triangolo dati la base e l'altezza.
*/
#include <iostream>
using namespace std;

int main() {
    double base, altezza, area;

    cin >> base >> altezza;
    area = (base * altezza) / 2;

    cout << "Area del triangolo: " << area << endl;

    return 0;
}
/*
9. Tabella delle Differenze tra Tre Numeri
Questo programma prende in input tre numeri interi e stampa una tabella con la loro differenza a due a due.

*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    cout << "  " << a << " " << b << " " << c << endl;
    cout << a << " " << 0 << " " << a-b << " " << a-c << endl;
    cout << b << " " << b-a << " " << 0 << " " << b-c << endl;
    cout << c << " " << c-a << " " << c-b << " " << 0 << endl;

    return 0;
}
