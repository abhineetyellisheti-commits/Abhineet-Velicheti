
#include <stdio.h>

struct item {
    char name[50];
    float price, weight, total_price;
};

typedef struct item Item;

Item input_item()
{
    Item i;

    printf("Enter item name, price and weight: ");
    scanf("%49s%f%f", i.name, &i.price, &i.weight);

    return i;
}

void compute_total_price(Item *i)
{
    i->total_price = i->price * i->weight;
}

int main()
{
    int n;
    float grand_total = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of items must be greater than 0.\n");
        return 1;
    }

    Item items[n];

    for (int i = 0; i < n; i++) {
        items[i] = input_item();
        compute_total_price(&items[i]);
        grand_total += items[i].total_price;
    }

    printf("\n--- SWEET SHOP BILL ---\n");
    printf("Item\tPrice\tWeight\tTotal\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\n",
               items[i].name,
               items[i].price,
               items[i].weight,
               items[i].total_price);
    }

    printf("\nGrand Total = %.2f\n", grand_total);

    return 0;
}
