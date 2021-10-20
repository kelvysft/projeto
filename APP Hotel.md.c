#include <stdio.h>

#include <locale.h>

int main()

{

    setlocale(LC_ALL, "");

    int opcao, indice = 0;

    float qtd, total = 0;

    float pedido[99][4];

    char produto[20];

    system("cls");
    printf("ITEM     PRODUTO             CODIGO        PRECO UNITARIO\n");

    printf("1        CERVEJA             100                 7,00\n");

    printf("2        BATATA FRITA        101                 15,50\n");

    printf("3        CAIPIRINHA          102                 20,00\n");

    printf("4        DRINK               103                 25,30\n");

    printf("5        SUCO                104                 10,20\n");

    printf("6        AGUA                105                 4,00\n");

    printf("7        REFRIGERANTE        106                 5,50\n");

    do // itens

    {

        printf("\nESCOLHA UM ITEM : ");

        scanf_s("%d", &opcao);

        if (opcao >= 1 && opcao <= 7)

        {

            printf("QUANTIDADE : ");

            scanf_s("%f", &qtd);

            if (qtd <= 0)

            {

                printf("QUANTIDADE DEVE SER MAIOR QUE ZERO !!!!!\n\n");

                system("pause");

                break;
            }
        }

        switch (opcao) // LISTA DE PEDIDOS

        {

        case 1:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 7.00;

            indice++;

            break;

        case 2:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 15, 50;

            indice++;

            break;

        case 3:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 20, 00;

            indice++;

            break;

        case 4:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 25, 30;

            indice++;

            break;

        case 5:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 10, 20;

            indice++;

            break;

        case 6:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 4, 00;

            indice++;

            break;

        case 7:

            pedido[indice][0] = opcao;

            pedido[indice][2] = qtd;

            pedido[indice][3] = 5, 50;

            indice++;

            break;
        }

    } while (opcao >= 1 && opcao <= 7);

    system("cls");

    printf("RELATORIO DOS PEDIDOS\n");

    printf("\nITEM    QTDE      PRECO    VALOR\n");

    for (int i = 0; i < indice; i++)

    {

        printf("%.1f     %.1f       %.2f     %.2f\n", pedido[i][0], pedido[i][2], pedido[i][3], (pedido[i][2] * pedido[i][3]));

        total = total + (pedido[i][2] * pedido[i][3]);
    }

    printf("\n\nVALOR TOTAL DO PEDIDO     %.2f\n\n", total);

    system("pause");

    return 0;
}