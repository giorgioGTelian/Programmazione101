// 1. Firewall per Lettere Minuscole

#include <iostream>
using namespace std;

int main() {
    char c;
    for (int i = 0; i < 5; ++i) {
        cin >> c;
        if (islower(c)) {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
/* 2. Verifica se un Numero è Divisore degli Altri (Versione con if e senza if)
Con if:
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
if (a % b == 0 && a % c == 0) {
  cout << ( "a è divisore  " ) << endl;
}
if (b % a == 0 && b % c == 0) {
  cout << ( "b è divisore  " ) << endl;
}
if (c % a == 0 && c % b == 0) {
  cout << ( "c è divisore  " ) << endl;
} else {
  cout << ( "nulla è divisore... " ) << endl;
}
    return 0;
}
// Senza if:

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a % b == 0 && a % c == 0) || (b % a == 0 && b % c == 0) || (c % a == 0 && c % b == 0) << endl;
    return 0;
}
// 3. Calcolatrice Tascabile

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        case '%': cout << a % b; break;
        default: cout << "Operazione non valida";
    }
    cout << endl;
    return 0;
}
// 4. Stampa Ordinata di Tre Interi

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
// 5. Intero Più Vicino al Valore Medio

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, medio;
    cin >> a >> b >> c >> d;
    medio = (a + b + c + d) / 4;
    int closest = a;
    if (abs(b - medio) < abs(closest - medio)) closest = b;
    if (abs(c - medio) < abs(closest - medio)) closest = c;
    if (abs(d - medio) < abs(closest - medio)) closest = d;
    cout << closest << endl;
    return 0;
}
// 6. Somma dei Numeri Minori di n

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
// 7. Calcolo del Fattoriale

#include <iostream>
using namespace std;

int main() {
    int n, fattoriale = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        fattoriale *= i;
    }
    cout << fattoriale << endl;
    return 0;
}
// 8. Parte Intera della Radice Quadrata

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << static_cast<int>(sqrt(n)) << endl;
    return 0;
}
// 9. Parte Intera del Logaritmo in Base 2

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << static_cast<int>(log2(n)) << endl;
    return 0;
}
// 10. Radice Quadrata con il Metodo di Bombelli

#include <iostream>
#include <cmath>
using namespace std;

double bombelli(double n, int iterazioni) {
    double x = n;
    for (int i = 0; i < iterazioni; ++i) {
        x = (x + n / x) / 2;
    }
    return x;
}

int main() {
    double n;
    int iterazioni;
    cin >> n >> iterazioni;
    cout << bombelli(n, iterazioni) << endl;
    return 0;
}
// 11. Stampa di Asterischi

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "*";
    }
    cout << endl;
    return 0;
}
// 12. Verifica se un Numero è Primo

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << (isPrime(n) ? "primo" : "non_primo") << endl;
    return 0;
}
// 13. Divisibilità

#include <iostream>
using namespace std;

int main() {
    int n, divisore;
    cin >> n;
    do {
        cin >> divisore;
    } while (n % divisore != 0);
    cout << "Divisore corretto!" << endl;
    return 0;
}
// 14. Somma delle Cifre di un Numero

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}
// 15. Approssimazione di e^x

#include <iostream>
#include <cmath>
using namespace std;

double expApprox(double x, int n) {
    double sum = 1.0; // Inizia da 1 per la parte "1" nella serie
    double term = 1.0; // Termine iniziale x^0/0!

    for (int i = 1; i <= n; ++i) {
        term *= x / i; // Calcola il prossimo termine della serie
        sum += term;
    }

    return sum;
}

int main() {
    double x;
    int n;
    cin >> x >> n;
    cout << "Approssimazione: " << expApprox(x, n) << endl;
    cout << "Valore exp(x): " << exp(x) << endl;
    return 0;
}
