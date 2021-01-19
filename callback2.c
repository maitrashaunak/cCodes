/* Testing call backs with structure */

#include <stdio.h>

struct t1;
typedef void (*f)(struct t1 *t);


struct t1{
	int a;
	int b;
	f fn;
};


void myfunction(struct t1 *t){
	
		t->a = 10;
		t->b = 20;


}

int main()
{
	
	struct t1 test;
	test.fn = &myfunction;
	test.fn(&test);
	printf("%d %d\n",test.a,test.b);
	
	
	return 0;
}
