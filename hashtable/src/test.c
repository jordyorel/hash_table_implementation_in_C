#include <stdio.h>


int main() {
    double radius, height, surface, volume;
    printf("Enter radius and height: ");
    scanf("%lf %lf", &radius, &height);

    surface = (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius);
    volume = 3.14 * radius * radius * height;

    printf("Surface area: %.2lf\n", surface);
    printf("Volume: %.2lf\n", volume);



    return 0;
}