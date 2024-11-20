#include <stdio.h>
int main() {
    // Variáveis para armazenar a temperatura em Celsius e Fahrenheit
    float c, f;

    // Solicita ao usuário que insira a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    // Converte a temperatura para Fahrenheit usando a fórmula correta
    f = (9.0 / 5.0) * c + 32;

    // Exibe o resultado
    printf("A temperatura em Fahrenheit é: %.2f\n", f);

    return 0;
}
