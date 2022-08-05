#include<stdio.h>


void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
        printf("(%d, %d) \n",x0 + x, y0 + y);
        printf("(%d, %d) \n",x0 + y, y0 + x);
        printf("(%d, %d) \n",x0 - y, y0 + x);
        printf("(%d, %d) \n",x0 - x, y0 + y);
        printf("(%d, %d) \n",x0 - x, y0 - y);
        printf("(%d, %d) \n",x0 - y, y0 - x);
        printf("(%d, %d) \n",x0 + y, y0 - x);
        printf("(%d, %d) \n",x0 + x, y0 - y);

        if (err <= 0)
        {
            y += 1;
            err += 2*y + 1;
        }

        if (err > 0)
        {
            x -= 1;
            err -= 2*x + 1;
        }
    }
}

int main()
{
int x, y, r;

printf("Enter radius of circle: ");
scanf("%d", &r);
printf("Enter co-ordinates of center(x and y): ");
scanf("%d%d", &x, &y);

drawcircle(x, y, r);

return 0;
}
