#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, raiz,x1, x2, aux1, aux2;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = pow(b, 2) - 4 * a * c;
    raiz = sqrt(delta);
    if(raiz > 0){
        if(((-b) + raiz) == 0 || ((-b) - raiz) == 0 || (2 * a) == 0){
            printf("Impossivel calcular\n");
        }
        else{
            x1 = ((-b) + raiz) / (2 * a);
            x2 = ((-b) - raiz) / (2 * a);
            printf("R1 = %.5f\n", x1);
            printf("R2 = %.5f\n", x2);
        }
    }
    else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}
