#include <stdio.h>


int main(){
    char o;
    int i, j, l = 11;
    double s = 0, n=0;
    scanf("%c", &o);
    for (i = 0; i <=11; i++){
        for (j = 0; j <= 11; j++){
            scanf("%lf", &n);

          if(i < 6 && j > l){
                s += n;
          }
           else if (i > 5 && j > i  ){
                s += n;
           }
        }
        if(i<6){
        	l--;
        }
    }
    if (o == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s / 30);

    return 0;
}