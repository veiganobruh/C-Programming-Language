#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vel_km,vel_ms;
    printf("\nVelocidade em Km/h:");
    scanf("%f",&vel_km);
    printf("\nVelocidade em m/s:%f",vel_km/3.6);

    return 0;
}
