#include<stdio.h>


int main (){
    int i=0,k=0;
    char stri[100],srh[40];
    printf("Enter Sentance :");
    gets(stri);
     printf("Enter word :");
    scanf("%s",&srh);

    while(stri[i]!='\0'){
        if(stri[i]==' '||k==0){
               int s=1,j=0;
            while(srh[s-1]!='\0'){





















               printf("%d stri\n",k);

               if(srh[s-1]==stri[(k+s)-1]){
                s++;
                printf("%d",s);
               }
               else{
                j=1;
                break;
               }

            }
            if(j==0||stri[(i+s)-1]=='\0'){
                printf("index is:%d",k);
            }
           // printf("%d",j);
            k=i+1;
        }
        i++;
    }
}
