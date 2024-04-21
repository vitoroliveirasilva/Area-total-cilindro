#include <stdio.h>
#include <math.h>

//Função para calcular a área total exterior do cilindro
void CalculaArea(float* area, float* diametro, float* altura) {

    printf("\n\nDigite o diâmetro do cilindro em cm: ");
        scanf("%f", &*diametro);
    printf("Digite a altura do cilindro em cm: ");
        scanf("%f", &*altura);

    // Calcula a área exterior total do cilindro
    *area = 2 * 3.14 * pow((*diametro/2), 2) + 2 * 3.14 * (*diametro/2) * *altura;
}

int main(void) {
    //O diametro e a altura informadas pelo usuário são do tipo float e inicializam em 0. A Área calulada também pode não ser valor inteiro, logo é float sendo inicializada em 0.
    float diametro=0, altura=0, area=0;
  
    //Variável que define a escolha do usuário na escolha de exibição do rsultado.
    int result;

    printf("~ Calule a área total exterior do cilindro ~\n\n1) Milimetros quadrados\n2) Centimetros quadrados\nInsira o número equivalente a medida em que deseja ver o resultado: ");
    scanf("%d", &result);
  
    switch (result) {
        case 1: //Caso o usuário informe 1, o valo é exibido em milimetros quadrados
            CalculaArea(&area, &diametro, &altura);
            printf("\n\nÁrea total exterior do cilindro: %.2f mm²\n", area*100);
            break;
        
        case 2: //Caso o usuário informe 2, o valo é exibido em centimetros quadrados
            CalculaArea(&area, &diametro, &altura);
            printf("\n\nÁrea total exterior do cilindro: %.2f cm²\n", area);
            break;
        
        default: //Caso o valor inserido não seja válido, encerra o programa
            printf("\n\n*** Não foi inserido um valor correspondente.");
            printf("\nO programa está sendo encerrado! ***");
            break;
    }
    return 0;
}
