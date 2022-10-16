#include "main.h"

/**
* alloc_grid - Returns a pointer to a 2-dimensional array of
* integers with each element initalized to 0
* @width: The width of the 2-dimensional array.
* @height: The height of the 2-dimensional array.
* Return: If width <= 0, height <= 0, or the function fails - NULL.
* Otherwise - a pointer to the 2-dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int **_2DArray;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2DArray = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		_2DArray[i] = malloc(sizeof(int) * width);

		if (_2DArray[i] == NULL)
		{
			for (; i >= 0; i--)
				free(_2DArray[i]);

			free(_2DArray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			_2DArray[i][j] = 0;
	}

	return (_2DArray);
}
