#include <stdio.h>

void test(void)
{
	char my_text[8] = "Testing";
	char * ch_ptr = my_text;
	int counter = 0;
	printf("the text: %s\n", my_text);
	printf("the pointer: %p\n", ch_ptr);
	ch_ptr++;
	printf("plus one: %p\n", ch_ptr);
	printf("inside new?: %s\n", ch_ptr);
	
	while (ch_ptr != 0)
	{
		printf("not yet %d", counter);
		ch_ptr++;
		counter++;
	}
}

int main(void)
{
	test();
	return(0);
}
