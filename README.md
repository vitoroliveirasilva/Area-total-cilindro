# Cálculo da Área de um Cilindro

Este programa em C calcula a área total exterior de um cilindro com base no diâmetro e na altura fornecidos pelo usuário.

## Como funciona

O programa solicita ao usuário que insira o diâmetro e a altura do cilindro em centímetros. Em seguida, ele calcula a área exterior total do cilindro usando a fórmula:
*Área=2πr2+2πrh*
onde:

- r é o raio do cilindro (metade do diâmetro)
- h é a altura do cilindro
- π é uma constante cujo valor aproximado é 3.14

O usuário também pode escolher a unidade de medida em que deseja ver o resultado (milímetros quadrados ou centímetros quadrados).

## Funções

O programa contém duas funções principais:

- **CalculaArea:** Esta função recebe três ponteiros para floats (area, diametro e altura) como parâmetros. Ela solicita ao usuário que insira o diâmetro e a altura do cilindro e, em seguida, calcula a área exterior total do cilindro.

- **main:** Esta é a função principal do programa. Ela inicializa as variáveis diametro, altura e area como floats e as define como 0. A função CalculaArea é chamada para modificar essas variáveis. A função main também contém um switch case para exibir o resultado na unidade de medida escolhida pelo usuário.

## Uso

Para usar o programa, compile e execute o arquivo "AreaExteriorCilindro.c" no seu compilador C de preferência. Siga as instruções na tela para escolher a unidade de medida do resultado e insira o diâmetro e a altura do cilindro, encontrando assim a área total exterior do mesmo

## Nota

- **Validação de Entrada:** Este programa não realiza a validação dos valores inseridos pelo usuário. Assim, é importante que os valores de diâmetro e altura sejam inseridos corretamente como números positivos para obter um resultado preciso.

- **Unidades de Medida:** Atualmente, o programa oferece apenas duas opções para a exibição da área exterior do cilindro: centímetros quadrados e milímetros quadrados. Outras unidades de medida não estão disponíveis.

- **Interpretação das Entradas:** O programa assume que os valores de diâmetro e altura inseridos pelo usuário estão em centímetros. Não há uma funcionalidade para converter ou interpretar outras unidades de medida, como metros ou milímetros. Portanto, é essencial que o usuário insira os valores na unidade de medida correta.
