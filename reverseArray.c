#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 4, 5};
    int counter = 0;
    for (int i = n-1; i >= 0; i--){
        arr2[counter]= arr1[i];
        counter++;
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}
