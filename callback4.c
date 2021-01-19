/* No forward declaration needed as
we do not use typedef for callback function
*/


#include <stdio.h>

struct Laptop{
    int price;
    char brand[20];
    void (*setPrice)(struct Laptop *lt, int price);
    void (*setBrand)(struct Laptop *lt, char *brand);
};

void set_Price(struct Laptop *lt,int price)
{
    lt->price = price;
}
void set_Brand(struct Laptop *lt, char *brand){

    sprintf(lt->brand,"%s",brand);
}


int main()
{
    struct Laptop L1;
    L1.setPrice = &set_Price;
    L1.setBrand = &set_Brand;
    L1.setPrice(&L1,25000);
    L1.setBrand(&L1,"Lenovo");
    printf("Brand: %s\n",L1.brand);
    printf("Price: %d\n",L1.price);
    return 0;
}