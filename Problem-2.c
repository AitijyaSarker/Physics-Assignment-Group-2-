#include <stdio.h>
#include <math.h>

int main() {
    // Defining the angle in degrees
    double theta_degrees = 45.0;
    // Converting angle to radians for calculation
    double theta_radians = theta_degrees * (M_PI / 180.0);
    // Calculating the ratio using the sine of the angle
    double ratio = 1 / sin(theta_radians);

    printf("The ratio of the slit width to the wavelength for the first diffraction minimum at 45 degrees is: %f\n", ratio);

    return 0;
}
