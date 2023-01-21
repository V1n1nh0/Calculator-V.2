#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <math.h>

void inicio() {
printf("     ______      __           __          __                    ___    ____            \n");
printf("    / ____/___ _/ /______  __/ /___ _____/ /___  _________ _   |__ \\  / __ \\         \n");
printf("   / /   / __ `/ / ___/ / / / / __ `/ __  / __ \\/ ___/ __ `/   __/ / / / / /          \n");
printf("  / /___/ /_/ / / /__/ /_/ / / /_/ / /_/ / /_/ / /  / /_/ /   / __/_/ /_/ /            \n");
printf("  \\____/\\__,_/_/\\___/\\__,_/_/\\__,_/\\__,_/\\____/_/   \\__,_/   /____(_)____/     \n");
    system("color 2");
                                                                            
}

void ativada(ativou) {

    
    if(ativou == 's' || ativou == 'S') {
        system("color 1");
        printf("Ativando calculadora...\n");
        sleep(2);
        system("cls");
        return;
    }
    else if(ativou == 'N' || ativou == 'n'){
        system("color 4");
        printf("\nFLW! VAI COM DEUS\n");
    }
    else {
        system("color 4");
        printf("\nDigite (S ou N)!!\n");
    }
}

void calcula(char ativou) {

    if(ativou == 's' || ativou == 'S') {
        int n1;
        int n2;
        char operador;
        system("color 7");
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &n1);
        printf("\nDigite outro numero inteiro: ");
        scanf("%d", &n2);
        printf("\nDIGITE: '+' PARA ADICIONAR\nDIGITE: '-' PARA SUBITRAIR\nDIGITE: '*' PARA MULTIPLICAR\nDIGITE: '/' PARA DIVIDIR\nDIGITE: 'e' PARA RADICIAR");
        printf("\n\nSelecione um operador: ");
        scanf(" %c", &operador);
        system("cls");
        inicio();
        printf("\nSua expressao ficou assim: %d %c %d\n", n1, operador, n2);
    
    if(operador == '+') {
        int r = n1 + n2;
        printf("\nRESULTADO DESTA CONTA: %d\n", r);
    }
    else if(operador == '-') {
        int r = n1 - n2;
        printf("\nRESULTADO DESTA CONTA: %d\n", r);
    }
    else if(operador == '*') {
        int r = n1 * n2;
        printf("\nRESULTADO DESTA CONTA: %d\n", r);
    }
    else if(operador == '/') {
        int r = n1 / n2;
        printf("\nRESULTADO DESTA CONTA: %d\n", r);
    }
    else if(operador == 'e') {
        int r = pow(n1, n2);
        printf("\nRESULTADO DESTA CONTA: %d\n", r);
    }
    }
    
}


int main() {

    while(1) {
    // ASCII ART
    inicio();

    char ativou;
    printf("\nVoce deseja usar a calculadora? (S/N): ");
    scanf(" %c", &ativou);

    // FINALIZA CASO A RESPOSTA FOR NÃO.
    if(ativou == 'n' || ativou == 'N') {
        break;
    }

    ativada(ativou);
    if(ativou == 'S') {
        ativou = 's';
    }
    if(ativou == 's'){
        inicio();
    }
    calcula(ativou);
    
    // CONTINUAR USANDO A CALCULADORA - LOOP
    char continuar;
    printf("\nVoce deseja continuar usando a Calculadora (S/N) ? ");
    scanf(" %c", &continuar);
    if(continuar == 'S' || continuar == 's') {
        system("cls");
        continue;
    }
    else {
        break;
    }
    }
  
}