//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
#include<math.h>

int read_coordinates();

float calculate_dist(float , float, float, float);

int display(float);

int read_parameters()
{
    float x1,y1,x2,y2,dist;
    printf("enter the first coordinates(x1,y1): ");
    scanf("%f %f",&x1,&y1);
    printf("enter the second coordinates(x2,y2): ");
    scanf("%f %f",&x2,&y2);
    dist = calculate_dist(x1,y1,x2,y2);
    display(dist);
    return 0;
}

float calculate_dist(float x1, float y1, float x2, float y2)
{
    float dist;
    dist = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
    return dist;
}

int display(float dist)
{
    printf("\n The distance between two points is : %.2f: \n",dist);
    return 0;
}

int main()
{
    read_parameters();
    return 0;
}
