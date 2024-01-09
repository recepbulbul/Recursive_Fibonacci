#include <stdio.h>
double a=1,b=1,topla=0,sayac=0,N;
void fibonacci(double topla){
    if (sayac<N)
    {
        printf("%.lf \t",b);
        topla = a+b;
        b=a;
        a=topla;
        sayac++;
        fibonacci(topla);
    }
}
int main(){
    printf("Sayi Giriniz: ");
    scanf("%lf",&N); 
    fibonacci(N); 

    return 0;
}