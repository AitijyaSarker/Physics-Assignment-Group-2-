#include <stdio.h>
#include <math.h>

int main() {
    double lambda, theta, d;
    int m;
    
  
    printf("Enter the wavelength λ (in nm): ");
    scanf("%lf", &lambda);
    
    
    if(lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
    }
    
    printf("Enter the angle θ (in degrees): ");
    scanf("%lf", &theta);
    printf("Enter the slit separation d (in μm): ");
    scanf("%lf", &d);
    
    
    theta = theta * (M_PI / 180.0);
    
   
    d = d * 1000;
    
    
    m = (int)(d * sin(theta) / lambda);
    
    
    printf("%d-th order maxima\n", m);
    
    return 0;
}
