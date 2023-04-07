#include <iostream>
#include <cmath>

double f(double x) {
    // Función periódica a calcular la suma de Fourier
    return sin(x) + sin(3*x) + sin(5*x);
}

double a0(double T) {
    // Coeficiente a0
    return (1/T) * (0.5 * (f(-T/2) + f(T/2)));
}

double ai(double T, int i) {
    // Coeficiente ai
    double sum = 0.0;
    double dx = 0.001;
    for (double x = -T/2; x <= T/2; x += dx) {
        sum += f(x) * cos(i*x) * dx;
    }
    return (1/T) * sum;
}

double bi(double T, int i) {
    // Coeficiente bi
    double sum = 0.0;
    double dx = 0.001;
    for (double x = -T/2; x <= T/2; x += dx) {
        sum += f(x) * sin(i*x) * dx;
    }
    return (1/T) * sum;
}

double fourier(double x, double T, int N) {
    // Suma de Fourier de la función f(x)
    double sum = a0(T);
    for (int i = 1; i <= N; i++) {
        sum += ai(T, i) * cos(i*x) + bi(T, i) * sin(i*x);
    }
    return sum;
}

int main() {
    double T = 2*M_PI; // Período de la función
    int N = 10; // Número de términos en la suma de Fourier
    double dx = 0.01; // Incremento en x
    double x = -T/2;
    while (x <= T/2) {
        std::cout << x << " " << f(x) << " " << fourier(x, T, N) << std::endl;
        x += dx;
    }
    return 0;
}
