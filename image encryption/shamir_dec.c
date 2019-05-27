#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int sss_dec(int* randx,int* points,int n,int k){
    int i,j,ans=0;
    for(i=0;i<k;i++){
        int temp=1;
        for(j=0;j<k;j++){
            if(j==i){
                temp*=1;
                continue;
            }
                //continue;

            temp*=(int)((randx[j])/(randx[j]-randx[i]));      
        }
        ans+=points[i]*temp;
    }
    return ans;
}

int main(){
 int n,k;
 n=6;
 k=2;
 int randx[6] = {1,2,3,4,5,6};
 int points[6] = {6,8,10,12,14,16}; 
 int ans = sss_dec(randx,points,n,k);
 printf("%d\n",ans);
 return 0;
}