#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta, d;
    int m;
    
  
    printf("Enter the wavelength λ (in nm): ");
    scanf("%lf", &lambda);
    
    // Checking if the wavelength is within the valid range
    if(lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
    }
    
    printf("Enter the angle θ (in degrees): ");
    scanf("%lf", &theta);
    printf("Enter the slit separation d (in μm): ");
    scanf("%lf", &d);
    
    // Converting angle from degrees to radians
    theta = theta * (M_PI / 180.0);
    
    // Converting d from μm to nm (1 μm = 1000 nm)
    d = d * 1000;
    
    // Calculating the order of the maxima
    m = (int)(d * sin(theta) / lambda);
    
    // Output of the result
    printf("%d-th order maxima\n", m);
    
    return 0;
}
