#include <stdio.h>

int swap(int a[],int i){
    int temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}

int bubblesort(int a[],int n){
    int last=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<last;j++){
            if(a[j]>a[j+1]){
                swap(a,j);
            }
        }
        last--;
    }
}


int is_sorted(int a[],int b[],int k,int n){
    for(int i=k;i<n;i++){
        if(a[i]!=b[i]){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    bubblesort(b,n);
    if(is_sorted(a,b,k,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}
