#include<stdio.h>
#include<conio.h>

int main(void)
{
	//�ő�HP��2500�@HP��1200
	//��������HP��100������*15    100%=15  50=7.5
	//���݂́��̐�

	double FHp = 2500;
	double HP = 1200;
	float a = 15.0;
	float b = 0;
	int c = 0;

	printf("%lf\n", HP / FHp * 100);
	b = HP / FHp;
	c = a*b;
	for (int j = 0; j < c; j++)
	{
		printf("��");
	}
	_getch();
	return 0;
}
//100 15==1
//48    ==
//100:48=15:x
//720=100x
//720/100=x
//x==7.2