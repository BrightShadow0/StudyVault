#include <stdio.h>
#include <string.h>

struct ProdDet
{
    int qty;
    char code[20];
    long double ppu;
    char name[100];
};

int main()
{
    struct ProdDet prod1;

    printf("Enter product name: ");
    fgets(prod1.name, 100, stdin);
    prod1.name[strcspn(prod1.name, "\n")] = '\0';

    printf("Enter product code: ");
    scanf("%19s", prod1.code);

    printf("Enter product quantity: ");
    scanf("%d", &prod1.qty);

    printf("Enter price per unit: ");
    scanf("%Lf", &prod1.ppu);

    printf("\nProduct Details:\n");
    printf("Product Name: %s\n", prod1.name);
    printf("Product Code: %s\n", prod1.code);
    printf("Product Quantity: %d\n", prod1.qty);
    printf("Price per Unit: %.2Lf\n", prod1.ppu);

    return 0;
}