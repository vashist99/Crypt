#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

    int isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1)  return 0; 
  
    
    for (int i=2; i<sqrt(n); i++) 
        if (n%i == 0) 
            return 0; 
  
    return 1; 
}  


void enc_sss(int s,int n){
    //considering that n<p
    int i,j;
    int p=s;
    int points[n];
    int randx[n];
    char filename[20];
    //to find smallest prime greater than or equal to n;
    while(isPrime(p)!=1)
        p++; 

    //to generate n random x coordinates and store them:
    for(i=0;i<n;i++){
        randx[i] = i+1;
    }    
    //prime number is p hence finite field is of the order of p;
    int k;
    /*if(n%2==0)
        k = n/2;
    else
        k = (n+1)/2;*/

    k = n/2;    
        
    int a[k];
    a[0] =s;    

    
    for(i=1;i<k;i++){
        a[i] = rand()%p; 
        printf("%d\n",a[i]);
    }

    //clearing point array:
    for(i=0;i<n;i++){
        points[i] =0;
    }
    //to find n values out of the polynomial:
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            points[i] += a[j]*pow(randx[i],j);
        }
    FILE *files[n];

    sprintf(filename, "results%d.txt", i);
    files[i] = fopen(filename, "a+");
        fprintf(files[i],"%d ",points[i]);
         
    }
    
}

int main(){
    int a[2][2] = {1,2,3,4};
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
                enc_sss(a[i][j],6);
        }
        printf("\n");
    }
    return 0;
}