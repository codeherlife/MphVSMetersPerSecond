//
//  main.c
//  SpeedLab
//
//  Created by Melanie Mills on 8/30/18.
//  Student id: 012090935
//

#include <stdio.h>

int main(void) {
    float distanceInMiles = 425.5;
    float numHoursOfTravel = 7.5;
    float metersTraveled = 1600 * distanceInMiles;
    float numSecondsTraveled = 3600 * numHoursOfTravel;
    float carsMilesPerHour;
    float carsMetersPerSecond;
    
    carsMilesPerHour = distanceInMiles / numHoursOfTravel;
    
    carsMetersPerSecond = metersTraveled / numSecondsTraveled;
    
    printf("The speed of the car in miles is: %f\n", carsMilesPerHour);
    
    printf("The speed of the car in meters per second is: %f\n", carsMetersPerSecond);

    return 0;
}
