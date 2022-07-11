#include<stdio.h>
int main(){
   
    int size, target, i,j, resize[2];
    
    printf("please enter the numsize: ");   
    scanf("%d", &size);
    int array[size];
    
    for (i = 0; i < size; ++i){
    scanf("%d", &array[i]);
    }
    
    printf("please enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < size; ++i){
        for (j = i+1; j < size; ++j){
            if(array[i] + array[j] == target){
                resize[0] = i;
                resize[1] = j;
                }
		}
	}
    for (i = 0; i < 2; ++i){
        printf("the %d element in the array is %d\n", i, resize[i]);
    }

    return 0;
}