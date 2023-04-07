# sumatoria_fourier_Cplusplus
📌La suma de Fourier es una herramienta matemática utilizada para representar una función periódica como una suma infinita de funciones sinusoidales.

Supongamos que tenemos una función periódica f(x) de período 2*pi. La suma de Fourier de f(x) se puede expresar como:
f(x) = a0/2 + sum(ai*cos(i*x) + bi*sin(i*x), i = 1 to infinity)

donde a0, ai y bi son los coeficientes de Fourier que se pueden calcular como:
a0 = (1/pi) * integral(f(x), x = -pi to pi)
ai = (1/pi) * integral(f(x)*cos(i*x), x = -pi to pi)
bi = (1/pi) * integral(f(x)*sin(i*x), x = -pi to pi)

En este código, se define una función f(x) que representa la función periódica a la que se le va a calcular la suma de Fourier. Luego, se definen las funciones a0, ai y bi para calcular los coeficientes de Fourier.
