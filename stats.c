/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  char *address = &test[0];
   
  /* Statistics and Printing Functions Go Here */
  
  print_statistics(address,SIZE);	// Printing initial statistics

  find_median(address,SIZE);		// Finding median
  find_mean(address,SIZE);		// Finding mean
  find_maximum(address,SIZE);		// Finding maximum
  find_minimum(address,SIZE);		// Finding minimum
}

/* Add other Implementation File Code Here */

unsigned char print_statistics(unsigned char *array, unsigned int arraylength){



printf("Unsigned character pointers\n");
printf("Array Pointer: %p\n" , &array[0]); // Utilize %p to display pointer addresses
printf("The value in the pointer [20]: %d\n\n" , array[20]); // Utilize %d to display the digits in ptr

print_array(array, arraylength);
sort_array(array, arraylength);		// Sort Array (Using pointers and no new variables)
print_array(array, arraylength);	// Print sorted array

return array;
}


unsigned char print_array(unsigned char* array, unsigned int arraylength){
int i = 0;		// For/loop counter
int counter = 1;	// Counter of elements
int rowWidth = 8;	// Width of array


printf("Array of numbers: \n");
printf("	");
for (i = 0 ; i < arraylength ; i ++) {

	printf(" %d", array[i]);
	if ( ((counter%rowWidth) == 0) && (i!=0)){ // Formatting row sizes
		printf(" 	\n"); 		   // Providing spaces to the right
		if (counter/arraylength!=1){       // Checking if it is the last element
		printf("	");
		}
	}
	counter++;
}

printf("\n");

return array;
}

unsigned char find_median(unsigned char* array, unsigned int arraylength){
float median = 0;

if (arraylength%2==0){
	printf("The array median values are: %d" , (array[(arraylength-1)/2]) );
	printf(" and %d\n" , (array[(arraylength)/2]) );
	median =  ( (  (float)(array[(arraylength-1)/2]) + (float)(array[(arraylength)/2]) ) / 2);	// Always ensure the correct parsing is chosen
} else {
	printf("The array median values are: %d" , (array[(arraylength-1)/2]) );	// Convert from int to double if required
}

printf("The median number: %.2f\n" ,median);	// %f for float numbers - %.2f indicates the number of digits to show

return array;
}

unsigned char find_mean(unsigned char* array, unsigned int arraylength){
int i = 0;
float sum = 0;
float mean = 0;
for ( i = 0; i < arraylength; i++){
	sum = array[i] + sum;
}
mean = sum/(float)arraylength;
printf("The mean is: %.2f\n" , mean);

return array;
}

unsigned char find_maximum(unsigned char* array, unsigned int arraylength){

printf("The maximum is: %.2f\n" , (float)array[arraylength-1]);

return array;
}

unsigned char find_minimum(unsigned char* array, unsigned int arraylength){

printf("The minimum is: %.2f\n\n" , (float)array[0]);

return array;
}

unsigned char sort_array(unsigned char* array, unsigned int arraylength){

int i = 0;
int j = 0;
int tempNum = 0;

for (i = 0; i < arraylength; i++){

	for (j = i+1; j < arraylength; j++){
	
		if (array[i] > array[j]) { 
                    tempNum =  array[i];
                    array[i] = array[j];
                    array[j] = tempNum; 
                }
	}
}


return array;
}

