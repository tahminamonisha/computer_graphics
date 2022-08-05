#include<stdio.h>

int abs (int n)
{
	return ((n>0) ? n : (n*(-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{

	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = X0;
	float Y = Y0;

	for (int i=0;i<=steps;i++)
	{
	    printf("%f, %f\n", X, Y);

		X += Xinc;
		Y += Yinc;
	}
}

int main()
{
    int x0,y0,x1,y1;
    printf("Enter first coor: ");
    scanf("%d%d", &x0,&y0);
    printf("Enter second coor: ");
    scanf("%d%d", &x1, &y1);

	DDA(x0,y0,x1,y1);
	return 0;
}
