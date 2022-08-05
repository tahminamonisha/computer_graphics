#include <stdio.h>

void drawCircle(int x0, int y0, int x, int y)
{
    printf("(%d, %d) \n",x0+x, y0+y);
    printf("(%d, %d) \n",x0-x, y0+y);
    printf("(%d, %d) \n",x0+x, y0-y);
    printf("(%d, %d) \n",x0-x, y0-y);
    printf("(%d, %d) \n",x0+y, y0+x);
    printf("(%d, %d) \n",x0-y, y0+x);
    printf("(%d, %d) \n",x0+y, y0-x);
    printf("(%d, %d) \n",x0-y, y0-x);

}
void circleBres(int x0, int y0, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(x0, y0, x, y);
    while (y >= x)
    {
        x++;

        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(x0, y0, x, y);
    }
}
int main()
{
    int x,y,r;

    printf("Enter radius of circle: ");
    scanf("%d", &r);
    printf("Enter co-ordinates of center(x and y): ");
    scanf("%d%d", &x, &y);

    circleBres(x, y, r);
    return 0;
}
