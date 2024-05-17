#include <stdio.h>
#include <math.h>

int main() {
    
    double theta_degrees = 45.0;
    
    double theta_radians = theta_degrees * (M_PI / 180.0);
   
    double ratio = 1 / sin(theta_radians);

    printf("The ratio of the slit width to the wavelength for the first diffraction minimum at 45 degrees is: %f\n", ratio);

    return 0;
}
