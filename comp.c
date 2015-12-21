#include<stdio.h>
#include<math.h>

float complex(){
  float ip = 3.14152936;
  int   N = 10;
  float com;
  
  for(n = 1;n <= N;n++){
    printf("%d\n",n);
    
    for(m = 1;m <= 10;m++){
      com = cos(2 * ip * m * n/N) + sin(2 * ip * m * n/N);
      printf("#%2d %f\n",m,com);
      
    }
  }
}
