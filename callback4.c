/* No forward declaration needed as
we do not use typedef for callback function
*/


#include <stdio.h>

struct Laptop{
    int price;
    char brand[20];
    void (*setPrice)(struct Laptop *lt, int price);
};

void set_Price(struct Laptop *lt,int price)
{
    lt->price = price;
}


int main()
{
    struct Laptop L1;
    L1.setPrice = &set_Price;
    L1.setPrice(&L1,25000);
    printf("Price: %d\n",L1.price);
    return 0;
}