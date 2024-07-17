#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each array element
 *
 * Description: This function iterates through the array elements and applies
 * the function `action` to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	    size_t i;

    	if (array != NULL && action != NULL)
    {
       		 for (i = 0; i < size; i++)
        {
            			action(array[i]);
        }
    }
}

