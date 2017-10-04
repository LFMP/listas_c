#include <stdio.h>

int main(){
	printf("%d\n", (1 > 3 || (!(5 <= 8)) && 6 == 7));
	printf("%d\n", (!((2 >= 5) && (5 <= 8) || ((4+3) > 7))));
	printf("%d\n", (7 % 4 == 3 && !(20/5 == 5)));
	printf("%d\n", ((23.1 >= 64/3) || ('b' == 'a')));
	return 0;
}