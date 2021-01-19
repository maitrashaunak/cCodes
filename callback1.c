/* Struct containing function pointers
 * to modify its own elements like class methods in OOPs
 * */


#include <stdio.h>


 struct Laptop;    /* Forward declaration */
 enum colour;       /* Forward declaration */

typedef void (*changebrand) (struct Laptop *lt, char *brand);
typedef void (*changecolour) (struct Laptop *lt, enum colour color);
typedef void (*changeprice) (struct Laptop *lt, int price);



 enum colour{
    red = 0,
    black = 1,
    blue = 2,
};

struct Laptop{
    char brand[100];
    enum colour color;
    int price;
    changebrand cb;
    changecolour cc;
    changeprice cp;
};

void change_brand(struct Laptop *lt, char *brand)
{
    sprintf(lt->brand,"%s",brand);

}
void change_colour(struct Laptop *lt, enum colour col)
{
   lt->color = col;

}
void change_price(struct Laptop *lt, int price)
{
   lt->price = price;

}



int main()
{
    struct Laptop L1;
    enum colour color_to_set;
    L1.cb = &change_brand;
    L1.cc = &change_colour;
    L1.cp = &change_price;
    color_to_set = blue;
    L1.cb(&L1,"Lenovo");
    L1.cc(&L1,color_to_set);
    L1.cp(&L1,25000);
    printf("Brand: %s\n", L1.brand);
    printf("Colour = %d\n",L1.color);
    printf("Price = %d\n",L1.price);

    return 0;
}
