#include <stdio.h>
#include <math.h>
#define EARTH_RADIUS 6371.0
#define M_PI 3.14159265358979323846

double degreesToRadians(double degrees) {
    return degrees * M_PI/180;
}

int main() {
    double latitude1, longitude1, latitude2, longitude2;

    printf("Enter the latitude and longitude of the origin (in degrees):\n");
    printf("Latitude:  ");
    scanf("%lf", &latitude1);
    printf("Longitude  :");
    scanf("%lf", &longitude1);

    printf("Enter the latitude and longitude of the destination (in degrees): \n");
    printf("Latitude:  ");
    scanf("%lf", &latitude2);
    printf("Longitude:  ");
    scanf("%lf", &longitude2);

    latitude1 = degreesToRadians(latitude1);
    longitude1 = degreesToRadians(longitude1);
    latitude2 = degreesToRadians(latitude2);
    longitude2 = degreesToRadians(longitude2);

    double diff = longitude2 - longitude1;
    double distance = acos(sin(latitude1)*sin(latitude2)+cos(latitude1)*cos(latitude2)*cos(diff)*EARTH_RADIUS;














}