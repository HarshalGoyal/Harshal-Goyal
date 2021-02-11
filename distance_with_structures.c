//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct point{
    float x, y;
};

struct point get_prams()
{
    struct point p1;
    printf("\nEnter the coordinates: ");
    scanf("%f %f",&p1.x,&p1.y);
    return p1;
}

float compute(struct point * c1, struct point * c2){
    float distance;
    distance = sqrt((c1->x - c2->x) * (c1->x - c2->x) + (c1->y - c2->y) *(c1->y - c2->y));
    return distance;
}

int display(float* dist)
{
    printf("\n Distance between points is: %.2f \n", *dist);
    return 0;
}


int main(){
    struct point c1,c2;
    float dist;
    c1=get_prams();
    c2=get_prams();
    dist = compute(&c1,&c2);
    display(&dist);
   
    return 0;
}
