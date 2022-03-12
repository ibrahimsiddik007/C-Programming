#include<stdio.h>
void draw_circle(void);
void draw_intersect(void);
void draw_base(void);
void draw_triangle(void);
void draw_circle(void);

int main()
{
draw_circle();
draw_intersect();
draw_base();
draw_triangle();

return 0;
}
void draw_circle(void)
{
    printf("   *   ");
    printf("\n*     * ");
    printf("\n   *   ");
}

void draw_intersect(void)
{
    printf("\n  / \\");
    printf("\n /   \\");
    printf("\n/     \\");
}

void draw_base(void){
    printf("\n\n ______");
}

void draw_triangle(void)
{
printf("\n");
printf("\n");
printf("\n");
   draw_intersect();
   draw_base();
}
