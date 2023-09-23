/**
 * reverse_array - reverse contents of an array
 * @a: array to reverse
 * @n: number of elements in a
 */
void reverse_array(int *a, int n)
{
	int temp;
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		
		left++;
		right--;
	}
}
