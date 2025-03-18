#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

// dados do jogador
    char    nick[50] = "Mario" ;

    
// variaveis das cartas

    char   estado1     =  'a'        , estado2     =  'b'    ;
    char   codigo1[5]  =  "01"       , codigo2[5]  =  "02"   ;
    char   cidade1[50] =  "aaa"      , cidade2[50] =  "bbb"  ;
    int    populacao1  =   1         , populacao2  =   2     ;
    float  area1       =   1.1       , area2       =   2.2   ;
    float  pib1        =   1.1       , pib2        =   2.2   ;
    int    turismo1    =   1         , turismo2    =   2     ;

    float  pib_pc1     =   1.1       , pib_pc2     =   1.1   ;
    float  dens_Pop1   =   1.1       , dens_Pop2   =   1.1   ;



// interação com o jogador

    printf ("Seja bem vindo(a) ao Super_Trunfo!\n\nEscolha eu nick: \n");
    fgets (nick,50,stdin);


    printf ("O Super_Trunfo é um game card com temática de paises. Cada pais possui um leque de atributos como quantidade de pontos turisticos, área e etc. Vence a rodada a região que possuir maior atributo");
    printf ("\nPara iniciar a sua jornada no Super_trunfo precisamos registrar as suas cartas.\n\nVamos começar registrando apenas duas cartas.\n\nPronto? %s Vamos nessa!\n",nick);


        printf ("O primeiro atributo da sua carta é o 'Estado' e este é representado por uma letra que pode variar de A a H.\n\n");

            printf ("Insira o Estado da primeira carta: \n");
                scanf (" %c",&estado1);

            printf ("Insira o Estado da segunda carta: \n");    
                scanf (" %c",&estado2);


        printf ("\nJá o segundo atribudo é o 'Código', sendo eles 01, 02, 03 ou 04.\n\n");

            printf ("Insira o Código da primeira carta: \n");
                scanf (" %s",codigo1);

            printf ("\nInsira o Código da segunda carta: \n");
                scanf (" %s",codigo2);


        printf ("\nChegou a hora de definir a Cidade da sua carta. Lembre-se que o nome da cidade deve ser escrito em uma única palavra, caso o nome da cidade seja composto de mais de uma palavra utilize '_' no lugar de espaço (Ex.: Rio_de_Janeiro).\n\n");

            printf ("Insira a Cidade da primeira carta: \n");
                scanf (" %s",cidade1);

            printf ("\nInsira a Cidade da segunda carta: \n");
                scanf (" %s",cidade2);


        printf ("\nO Próximo atributo a ser determinado e a quantidade de habitantes que possui a sua cidade, o mesmo sera mostrado na sua carta como 'população'\n\n");

            printf ("Informa a população da primeira carta: \n");
                scanf (" %d",&populacao1);

            printf ("\nInforma a população da segunda carta: \n");
                scanf (" %d",&populacao2);


        printf ("\nUm aspecto importante de uma cidade é o seu tamanho e esse também é um dos atributos que será levado em consideração.\n Lembre-se de sempre ulilizar 'ponto' para separar as casas decimais (quando houver).\n\n");
            
            printf ("Insira a Área (Km²) da primeira carta: \n");
                scanf (" %f",&area1);

            printf ("\nInsira a Área (Km²) da segunda carta: \n");
                scanf (" %f",&area2);

        printf ("\nVocê esta quase acabando, faltam apenas 2 atriburos:  a quantidade de pontos turisticos da sua cidade e o PIB.\n Lembre-se de sempre ulilizar 'ponto' para separar as casas decimais (quando houver)\n\n");

            printf ("Insira PIB (Bilhões de reais) da primeira carta: \n");
                scanf (" %f",&pib1);

            printf ("\nInsira PIB (Bilhões de reais) da segunda carta: \n");
                scanf (" %f",&pib2);

            printf ("\nInsira a quantidade de pontos turísticos da primeira carta: \n");
                scanf (" %d",&turismo1);

            printf ("\nInsira a quantidade de pontos turísticos da segunda carta: \n");
                scanf (" %d",&turismo2);




// calculo das novas propriedades

    dens_Pop1 = (float) populacao1 / area1;

    dens_Pop2 = (float) populacao2 / area2;

    pib_pc1   = (float) pib1 * 1000000000 / populacao1;

    pib_pc2   = (float) pib2 * 1000000000 / populacao2;




// exibição das cartas

printf ("\n\nAs suas cartas foram registradas com sucesso!\n\n");

printf ("CARTA 1\nEstado:  %c\nCodigo:  %c%s\nCidade:  %s\nPopulação:  %d\nÁrea:  %.2f Km²\nPIB:  %.2f bilhões de reais\nPts Turísticos:  %d\nDensidade Populacional:  %.2f hab/km²\nPIB per Capita:  %.2f reais\n\n" , estado1 , estado1 , codigo1 , cidade1 , populacao1 , area1 , pib1 , turismo1 , dens_Pop1, pib_pc1);

printf ("CARTA 2\nEstado:  %c\nCodigo:  %c%s\nCidade:  %s\nPopulação:  %d\nÁrea:  %.2f Km²\nPIB:  %.2f bilhões de reais\nPts Turísticos:  %d\nDensidade Populacional:  %.2f hab/km²\nPIB per Capita:  %.2f reais\n\n" , estado2 , estado2 , codigo2 , cidade2 , populacao2 , area2 , pib2 , turismo2, dens_Pop2 , pib_pc2);

    return 0;
}
