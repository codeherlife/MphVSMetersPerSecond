//
//  main.c
//  SpeedLab
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Speed Lab;
//  Date: 8/31/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//


#include <stdio.h>
FILE *fp;

int main(void) {
    float distanceInMiles = 425.5;
    float numHoursOfTravel = 7.5;
    float metersTraveled = 1600 * distanceInMiles;
    float numSecondsTraveled = 3600 * numHoursOfTravel;
    float carsMilesPerHour;
    float carsMetersPerSecond;
    fp = fopen("csis.txt", "w");
    
    carsMilesPerHour = distanceInMiles / numHoursOfTravel;
    carsMetersPerSecond = metersTraveled / numSecondsTraveled;
    
    printf("The speed of the car in miles per hour is: %.2f\n", carsMilesPerHour);
    fprintf(fp, "The speed of the car in miles per hour is: %.2f\n", carsMilesPerHour);
    
    printf("The speed of the car in meters per second is: %.2f\n", carsMetersPerSecond);
    fprintf(fp, "The speed of the car in meters per second is: %.2f\n", carsMetersPerSecond);
    
    fclose(fp);
    return 0;
}
