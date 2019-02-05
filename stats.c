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
 * @file <stats.c> 
 * @brief <Simple statistics for data manipulation. Data is provided is the form of array>
 *	  <Utilization of pointers, and other concepts are seen here.>
 * 
 *
 * @author <Walter F Pintor O>
 * @date <5th Feb 2019>
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

return array;
}

unsigned char find_median(unsigned char* array, unsigned int arraylength){

return array;
}

unsigned char find_mean(unsigned char* array, unsigned int arraylength){

return array;
}

unsigned char find_maximum(unsigned char* array, unsigned int arraylength){

return array;
}

unsigned char find_minimum(unsigned char* array, unsigned int arraylength){

return array;
}

unsigned char sort_array(unsigned char* array, unsigned int arraylength){

return array;
}

