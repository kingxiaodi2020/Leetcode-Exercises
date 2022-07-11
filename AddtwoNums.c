#include<stdio.h>
#include<math.h>
int main() {
    int s1, s2, i, j = 1,num1 =0, num2 = 0, sum = 0, total = 0, p1, p2;                                  //initialisation
    printf("please enter the size of the array 1 and array2 in order: ");         
    scanf("%d %d", &s1, &s2);                                                           //initialise the size of each array
    int array1[s1],array2[s2];
    
    for (i = 0; i < s1; ++i){                                                          //fill in values for 1st array
    	printf("please enter the element of the first array from index0 to the last: ");
      scanf("%d", &array1[i]);
    }

    /*check             
    for (i=0; i < s1; ++i){                         // values in the 1st array
    	printf("%d\n", array1[i]); 
    }}*/
     
    for (i = 0; i < s2; ++i){                                                          //fill in values for 2nd array
    	printf("please enter the element of the second array from index0 to the last: ");
      scanf("%d", &array2[i]);
    }
    
   
    for (i = 0; i < s1; i++){                                                         //calculate the total nums in 1st array
	   num1 += array1[i] * pow(10,i);
	   //printf("%d\n", num1);
    }
      
    for (i = 0; i < s2; i++){                                                        //calculate the total nums in 2nd array
	   num2 += array2[i] * pow(10,i);
	  // printf("%d\n", num2);
    }
    
    sum = num1 + num2;  
    total = num1+num2;                                                            //two nums add up
    //printf("%d\n",sum);
    
    while (total / 10 != 0){                                //calculate the total digits
    	total = total / 10;
    	j++;
    }
	
	int output[j];
	for(i = j-1; i > -1; --i) {                   //arrange the sum in reverse order and get output array
		p1 = ceil(pow(10,i+1));
		//printf("%d\n",p1);
		p2 = ceil(pow(10,i));
		//printf("%d\n",p2);
		output[i] = (sum % p1) / p2;
	}
	
	for (i=0; i < j; i++){                         // values in the output array
    	printf("%d\n", output[i]); 
    }
	
}	