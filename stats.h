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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <print_statistics> <Function that prints results of the statistics performed to data>
 * @param <print_array> <Function that prints the passed data using the received pointer>
 * @param <find_median> <Function that finds the median value in a set of data. If even selects the 2 values in the middle and finds the half between these two. If odd, only takes the middle value of all the data array.>
 * @param <find_mean> <Average function for the given set of data>
 * @param <find_maximum> <Assumes sorted has been done. Selects maximum value of the array.>
 * @param <find_minimum> <Assumes sorted has been done. Selects minimum value of the array.>
 * @param <sort_array> <Compares array elements one by one and assign them to the next value in the array if higher. if not, will maintain the current position in the array. (The higher the value, the higher the allocated item in the modified array)>
 *
 * @return <Add Return Informaiton here>
 */

unsigned char print_statistics(unsigned char* array, unsigned int arraylength);

unsigned char print_array(unsigned char* array, unsigned int arraylength);

unsigned char find_median(unsigned char* array, unsigned int arraylength);

unsigned char find_mean(unsigned char* array, unsigned int arraylength);

unsigned char find_maximum(unsigned char* array, unsigned int arraylength);

unsigned char find_minimum(unsigned char* array, unsigned int arraylength);

unsigned char sort_array(unsigned char* array, unsigned int arraylength);

#endif /* __STATS_H__ */
