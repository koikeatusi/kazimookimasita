#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(void)
{

	float x = 0;
	float y = 0;

	x = cos(3.14 / 180 * 30);
	y = sin(3.14 / 180 * 30);



	printf("x=%d:y=%d", x, y);
	_getch();
	return 0;
}