
#include<stdio.h>
int main(){
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++){
        int a;
        scanf("%d",&a);
        int arr[a],i,j;
        for (i=0; i<a; i++){
            scanf("%d",&arr[i]);
        }
        int c=0;
        for (i=0; i<a; i++){
            if (i==0){
                if (arr[i]>arr[i+1]){
                    c++;
                }
            }
            else if (i==a-1){
                int f=0;
                for (j=0; j<i; j++){
                    if (arr[i]>arr[j]){
                        f=1;
                    }
                    else{
                        f=0;
                        break;
                    }
                }
                if (f==1){
                    c++;
                }
            }
            else{
                int f=0;
                for (j=0; j<i; j++){
                    if (arr[i]>arr[j]){
                        f=1;
                    }
                    else{
                        f=0;
                        break;
                    }
                }
                if (f==1){
                    if (arr[i]>arr[i+1]){
                        c++;
                    }
                }
            }
        }
        printf("Case #%d: %d
",k+1,c);
    }
    return 0;
}
