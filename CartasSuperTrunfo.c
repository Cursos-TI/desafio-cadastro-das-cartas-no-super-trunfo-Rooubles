#include <stdio.h>

int main() {

// dados do jogador

    char    nick[50] = "Mario" ;


// variaveis das cartas
 
    char   estado1            =  'a'        , estado2     =  'b'     ;
    char   codigo1[5]         =  "01"       , codigo2[5]  =  "02"    ;
    char   cidade1[50]        =  "aaa"      , cidade2[50] =  "bbb"   ;
    unsigned long populacao1  =   1         , populacao2  =   2      ;
    float  area1              =   1.1       , area2       =   2.2    ;
    float  pib1               =   1.1       , pib2        =   2.2    ;
    int    turismo1           =   50        , turismo2    =   2      ;

    float  pib_pc1            =   1.1       , pib_pc2     =   1.1    ;
    float  dens_Pop1          =   1.1       , dens_Pop2   =   1.1    ;

    float  super_poder1       =   1.1       , super_poder2 =  2.2    ;



// interação com o jogador

    printf ("Seja bem vindo(a) ao Super_Trunfo!\n\nEscolha eu nick: \n");
        fgets (nick,50,stdin);


        printf ("O Super_Trunfo é um game card com temática de regiões. Cada regiao possui um leque de atributos como quantidade de pontos turisticos, área e etc. Vence a rodada a região que possuir maior atributo");
        printf ("\nPara iniciar a sua jornada no Super_trunfo precisamos registrar as suas cartas.\n\nVamos começar registrando apenas duas cartas.\n\nPronto? %s Vamos nessa!\n",nick);


            printf ("O primeiro passo é informar o 'Estado' e este é representado por uma letra que pode variar de A a H.\n\n");

                printf ("Insira o Estado da primeira carta: \n");
                    scanf (" %c",&estado1);

                printf ("Insira o Estado da segunda carta: \n");    
                    scanf (" %c",&estado2);


            printf ("\nJá o segundo passo é o 'Código', sendo eles 01, 02, 03 ou 04.\n\n");

                printf ("Insira o Código da primeira carta: \n");
                    scanf (" %s",codigo1);

                printf ("\nInsira o Código da segunda carta: \n");
                    scanf (" %s",codigo2);


            printf ("\nChegou a hora de definir a Cidade da sua carta. Lembre-se que o nome da cidade deve ser escrito em uma única palavra, caso o nome da cidade seja composto de mais de uma palavra utilize '_' no lugar de espaço (Ex.: Rio_de_Janeiro).\n\n");

                printf ("Insira a Cidade da primeira carta: \n");
                    scanf (" %s",cidade1);

                printf ("\nInsira a Cidade da segunda carta: \n");
                    scanf (" %s",cidade2);


            printf ("\nAgorra que os dados de identificação estão completos, precisamos cadastrar os atributos. Começaremos com a quantidade de habitantes que possui a sua cidade, o mesmo será mostrado na sua carta como 'população'\n\n");

                printf ("Insira a população da primeira carta: \n");
                    scanf (" %lu",&populacao1);

                printf ("\nInsira a população da segunda carta: \n");
                    scanf (" %lu",&populacao2);


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

    dens_Pop1    = (float)populacao1 / area1;

    dens_Pop2    = (float)populacao2 / area2;

    pib_pc1      = pib1 * 1000000000.00 / (float)populacao1;

    pib_pc2      = pib2 * 1000000000.00 / (float)populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + pib_pc1 + (-dens_Pop1);

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pib_pc2 + (-dens_Pop2);




// exibição das cartas

printf ("\n\nAs suas cartas foram registradas com sucesso!\n\n");


printf ("CARTA 1\n");
    printf ("Estado..................: %c\n", estado1);
    printf ("Codigo..................: %c%s\n", estado1, codigo1);
    printf ("Cidade..................: %s\n", cidade1);
    printf ("População...............: %lu habitantes\n", populacao1);
    printf ("Área....................: %.2f Km²\n", area1);
    printf ("PIB.....................: %.2f Bilhões de reais\n", pib1);
    printf ("Pontos Turisticos.......: %.d\n", turismo1);
    printf ("Densidade Populacional..: %.2f hab/Km²\n", dens_Pop1);
    printf ("PIB per Capita..........: %.2f reais\n", pib_pc1);
    printf ("Super Poder.............: %.0f\n\n", super_poder1);


printf ("CARTA 2\n");
    printf ("Estado..................: %c\n", estado2);
    printf ("Codigo..................: %c%s\n", estado2, codigo2);
    printf ("Cidade..................: %s\n", cidade2);
    printf ("População...............: %lu habitantes\n", populacao2);
    printf ("Área....................: %.2f Km²\n", area2);
    printf ("PIB.....................: %.2f Bilhões de reais\n", pib2);
    printf ("Pontos Turisticos.......: %.d\n", turismo2);
    printf ("Densidade Populacional..: %.2f hab/Km²\n", dens_Pop2);
    printf ("PIB per Capita..........: %.2f reais\n", pib_pc2);
    printf ("Super Poder.............: %.0f\n", super_poder2);



// Comparando e exibindo o resultado

    printf ("\n%sESTE É O RESULTADO DA DISPUTA\n\n", nick);
    printf ("População...............:  Carta 1 venceu?  ( %d )\n", populacao1 > populacao2);
    printf ("Area....................:  Carta 1 venceu?  ( %d )\n", area1 > area2);
    printf ("PIB.....................:  Carta 1 venceu?  ( %d )\n", pib1 > pib2);
    printf ("Pts Turisticos..........:  Carta 1 venceu?  ( %d )\n", turismo1 > turismo2);
    printf ("Densidade Populacional..:  Carta 1 venceu?  ( %d )\n", dens_Pop1 < dens_Pop2);
    printf ("PIB per Capita..........:  Carta 1 venceu?  ( %d )\n", pib_pc1 > pib_pc2);
    printf ("Super Poder.............:  Carta 1 venceu?  ( %d )\n", super_poder1 > super_poder2);


return 0;

}