/* Struct containing function pointers
 * to modify its own elements like class methods in OOPs
 * here typedefs are used...
 * */


#include <stdio.h>


 typedef struct Laptop lap;    /* Forward declaration */
 typedef enum colour col;       /* Forward declaration */

typedef void (*changebrand) (lap *lt, char *brand);
typedef void (*changecolour) (lap *lt,col color);
typedef void (*changeprice) (lap *lt, int price);



 typedef enum colour{
    red = 0,
    black = 1,
    blue = 2,
}col;

typedef struct Laptop{
    char brand[100];
    col color;
    int price;
    changebrand cb;
    changecolour cc;
    changeprice cp;
}lap;

void change_brand(lap *lt, char *brand)
{
    sprintf(lt->brand,"%s",brand);

}
void change_colour(lap *lt,col colours)
{
   lt->color = colours;

}
void change_price(lap *lt, int price)
{
   lt->price = price;

}



int main()
{
    lap L1;
    col color_to_set;
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
