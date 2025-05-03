#include <stdio.h>

void greet(){
    printf("Good morning!");
}
// fibonnuci series
int fibonnuci(int n){
    if (n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonnuci(n-1) + fibonnuci(n-2);
    }
}
int main(){
    greet();
    int terms;
    printf("\nPlease enter the number of terms: ");
    scanf("%d", &terms);
    for(int i = 0; i <= terms; i++){
        printf("%d ", fibonnuci(i));
    }

    return 0;
}