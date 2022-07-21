#include<stdio.h>
#include<string.h>
int main(){
 	char s[50], count[50], subs[50];            
   int len, i, j, longest=0; 
   printf("please enter the string\n");
   scanf("%s",s);      //string input by user
   len = strlen(s);    //get the length of the string
   //printf("length of the word is %d", len);
   
   for (i=0; i<len; i++){      //create a "count" array to store the index number when next identiacal substring occurred 
   	for(j=i+1; j<len; j++){
   		if (s[i] == s[j]){
   			count[i] = j;
   			break;
   		}
   		else{
   			count[i] = i;
   		}
   	}
   }
 	/*check
   for (i=0;i<len;i++){
   	printf("%d\n",count[i]);
   }*/
   
	for (i=0; i<len-1; i++){      //calculate the string length until the same character occurred next time; discard the last term cuz it's substring is always the minimum
		subs[i] = count[i] - i;
	}
	
	for (i=0; i<len-1; i++){     //find the longest substring in the array
		if (subs[i] >= longest){
			longest = subs[i];
		}
	}
	printf("the output is: %d\n", longest);
	return 0;   
 }  