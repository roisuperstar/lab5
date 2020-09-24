#include <stdio.h>
main()
{
	int i, num;
	printf ("bang cuu chuong: ");
	scanf ("%d", &num);
	
	for (i = 1; i <= num+1; i++ )
	printf ("%d x %d = %d\n", num , i, num*i);
}
