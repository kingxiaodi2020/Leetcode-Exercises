#include<stdio.h>
int main(){
	int n1, n2, i, j, temp;          //initialise variables
	float median;                   
	printf("please enter the size of array 1 and 2 in order\n");   //array size input by the user
	scanf("%d %d",&n1,&n2);
	int nums1[n1], nums2[n2], merge[n1+n2];
	void swap(int *a, int *b);                //declare function used for swap position of two numbers
	
	printf("please enter the array one:");      //fill in array1 and array2
	for (i=0;i<n1;i++){
		scanf("%d", &nums1[i]);
	}
	
	printf("please enter the array two:");
	for (i=0;i<n2;i++){
		scanf("%d", &nums2[i]);
	}

	for (i=0; i<n1+n2;i++){                 //merge array1 and array2 together
		if (i < n1){
			merge[i] = nums1[i];}
		else {
			merge[i] = nums2[i-n1];
		}	
	}
   /*
	for (i=0;i<n1+n2;i++){
		printf("%d\n",merge[i]);
	} //check the elements in the merged array */	
	
	for (i=0; i< n1+n2; i++){                    //arrange elements in the merged array in ascending order 
		for(j=0; j<n1+n2-i-1;j++) {
			if(merge[j]>merge[j+1]) {
				swap(&merge[j], &merge[j+1]);
			}			
		}
	}
	/*
	for (i=0;i<n1+n2;i++){
		printf("%d",merge[i]);
	}*/

   if((n1+n2)%2 == 1){                      //get the  median of the merged array and outputs
   	median = merge[(n1+n2)/2];
   	printf("the median is %f",median);
   }
   else {
   		median = 0.5*(merge[(n1+n2)/2] + merge[(n1+n2)/2-1]);
   		printf("the median is %f",median);
   }
	return 0;
}

void swap(int *a, int *b){            // function to swap position of two numbers
	int temp = *a;
	*a = *b;
	*b = temp;
}