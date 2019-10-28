#include <stdio.h>
#include <stdlib.h>
#includeiniz: ");
    scanf("%d", &baslangic);
     siraNo = fork();
    
     if(siraNo < 0){
      printf("Child olustuma basarisiz oldu......");
      exit(-1);
    }
     else if(siraNo == 0) <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
    int baslangic = 0;
    pid_t siraNo;
 
    printf("Sayiyi gir{
        do{
        if(baslangic % 2 != 0)
          baslangic = (baslangic * 3) + 1;
         
        else if(baslangic% 2 == 0)
          baslangic= baslangic / 2;
 
        printf("%d\n", baslangic);
        }
        while(baslangic != 1);
    }
    return EXIT_SUCCESS;   
}