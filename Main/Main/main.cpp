#include <iostream>
#include <cmath>

using namespace std;


// Тут мы ищем двойной факториал
long double two_fact(int n) {
    long int a = 1;
    if (n == 0) {
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == n % 2) {
            a = a * i;
        }
    }
    return a;
}

//Тут мы просиходит подсет t...что как бы логично
long double t_fun(long double x) { 

    long double s1 = 0;
    long double s2 = 0;
    for (int k = 0; k <= 10; k++){
        s1 = s1 + pow(x, 2 * k + 1) / two_fact(2 * k + 1);
    }
    for (int k = 0; k <= 10; k++){

        s2 = s2 + pow(x, 2 * k) / two_fact(2 * k);
    }
    return (s1 / s2);
}

// Это main
int main() {

    long double answer;
    long double y;
    cout << "Your y is: ";
    cin >> y;
    answer = (7 * t_fun(0.25) + 2 * t_fun(1 + y)) / (6 - t_fun(y * y - 1));
    cout << answer;

    return 0;
}