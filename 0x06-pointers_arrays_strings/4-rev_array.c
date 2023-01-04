#include "main.h"



/**
 *
 *  * reverse_array - a function that reverse an array.
 *
 *   * @a: an input array
 *
 *    * @n: number of elements of array
 *
 *     * Return: Nothing
 *
 *      */

void reverse_array(int *a, int n)

{

		int j, temp;



			for (j = 0; j < n / 2; j++)

					{

								temp = a[j];

										a[j] = a[n - j - 1];

												a[n - j - 1] = temp;

													}

}
