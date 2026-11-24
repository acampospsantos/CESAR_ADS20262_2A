// Questão 05

#include <stdio.h>

int somaVetor(int v[], int n) {
    int somatorio = 0;

    for (int i = 0; i < n; i++) {
        somatorio = somatorio + v[i];
    }
    return somatorio;
}

int maiorValor(int v[], int n) {
    int maior = v[0];

    for (int i = 1; i < n; i++) {
        if (maior < v[i]) {
            maior = v[i];
        }
    }
    return maior;
}

int buscaValor(int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (x == v[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num, valorBusca;
    int vetor[8];
    int somaTotalVetor, maiorValorVetor, posValor;

    for (int i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        vetor[i] = num;
    }

    printf("\nDigite o valor que deseja buscar: ");
    scanf("%d", &valorBusca);

    somaTotalVetor = somaVetor(vetor, 8);
    maiorValorVetor = maiorValor(vetor, 8);
    posValor = buscaValor(vetor, 8, valorBusca);

    printf("\n--- RESULTADOS ---\n");
    printf("Soma total do vetor: %d\n", somaTotalVetor);
    printf("Maior valor do vetor: %d\n", maiorValorVetor);

    if (posValor != -1) {
        printf("Valor %d encontrado na posicao: %d\n", valorBusca, posValor);
    } else {
        printf("Valor %d nao encontrado (retorno: %d)\n", valorBusca, posValor);
    }

    return 0;
}