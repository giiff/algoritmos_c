#include <stdio.h>
#include <locale.h>

void main() {
    //The Magellanic Clouds are irregular dwarf galaxies orbiting our Milky Way galaxy.
    //The Large Magellanic Cloud (LMC) is 179,000 light years away from the Milky Way. 
    //The Small Magellanic Cloud (SMC) is further out, at 210,000 light years.
    //What is the approximate distance in Km from Earth to both Magellanic Clouds?
    //1 light year = 9,461e+12 Km
    double lightYear = 9.461e+12;
    double lmcDistanceInKm = lightYear*179000;
    double smcDistanceInKm = lightYear*210000;
    setlocale(LC_NUMERIC, "");
    printf("Approximate distance from Earth to LMC is %'.2f\n", lmcDistanceInKm );
    printf("Approximate distance from Earth to SMC is %'.2f\n", smcDistanceInKm );
    
    
}
