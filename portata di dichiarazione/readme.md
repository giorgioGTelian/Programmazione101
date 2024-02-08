Ecco le funzioni che hai richiesto:

### 1. Lettura e Stampa di un Numero Binario in Decimale
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void binToDec() {
    string binario;
    cin >> binario;
    int decimale = 0;

    for (int i = 0; i < binario.length(); ++i) {
        if (binario[i] == '1') {
            decimale += pow(2, binario.length() - 1 - i);
        }
    }

    cout << decimale << endl;
}
```

### 2. Lettura di Due Numeri Binari e Stampa della Somma e del Prodotto
```cpp
#include <bitset>
#include <iostream>
using namespace std;

void sumAndProductOfBin() {
    string bin1, bin2;
    cin >> bin1 >> bin2;

    // Conversione da binario a decimale
    unsigned long dec1 = bitset<64>(bin1).to_ulong();
    unsigned long dec2 = bitset<64>(bin2).to_ulong();

    // Calcolo somma e prodotto
    unsigned long sum = dec1 + dec2;
    unsigned long prod = dec1 * dec2;

    // Conversione da decimale a binario
    cout << bitset<64>(sum).to_string() << " " << bitset<64>(prod).to_string() << endl;
}
```

### 3. Calcolo di \(x^2 + y^2\) e \(x^2 \cdot y\)
```cpp
#include <iostream>
using namespace std;

void calculateSquares(int x, int y) {
    cout << "x^2 + y^2 = " << (x * x + y * y) << endl;
    cout << "x^2 * y = " << (x * x * y) << endl;
}
```

### 4. Stampa di un Intero con le Cifre Invertite
```cpp
#include <iostream>
using namespace std;

void reverseDigits(int n) {
    while (n != 0) {
        cout << n % 10;
        n /= 10;
    }
    cout << endl;
}
```

### 5. Libreria per la Conversione e Operazioni sui Numeri Binari
```cpp
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int bin2dec(string bin) {
    return bitset<64>(bin).to_ulong();
}

string dec2bin(int dec) {
    return bitset<64>(dec).to_string();
}

string bin_sum(string bin1, string bin2) {
    return bitset<64>(bin2dec(bin1) + bin2dec(bin2)).to_string();
}

string bin_prod(string bin1, string bin2) {
    return bitset<64>(bin2dec(bin1) * bin2dec(bin2)).to_string();
}
```

### 6. Soluzione delle Equazioni di Secondo Grado
Per ritornare due valori, possiamo utilizzare una coppia (`pair`) o una struttura. Ecco un esempio usando una coppia:

```cpp
#include <iostream>
#include <cmath>
#include <utility>
using namespace std;

pair<double, double> solveQuadratic(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;
    pair<double, double> soluzioni;

    if (discriminante >= 0) {
        soluzioni.first = (-b + sqrt(discriminante)) / (2 * a);
        soluzioni.second = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        // Qui puoi gestire il caso di discriminante negativo
    }

    return soluzioni;
}
```

Per utilizzare queste funzioni, puoi inserirle in un programma C++ e chiamarle con gli input appropriati. Assicurati di testarle per verificare la correttezza.
