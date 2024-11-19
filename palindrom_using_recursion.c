#include <stdio.h>
int isPalindrome(int *a, int i, int j){
    if(i>j){
        return 1;
    }

    return a[i]==a[j] && isPalindrome(a, i+1, j-1);
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    if(isPalindrome(a,0,n-1)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}