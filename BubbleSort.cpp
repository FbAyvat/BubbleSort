#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void print_array(const int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		cout << temp_array[i];
		cout << "\n";
	}
}

void initialize_array(int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		temp_array[i] = (rand() % 100);
	}
}

void bubble_sort(int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		for (size_t i = 0; i < length_of_array - 1; i++)
		{
			if (temp_array[i] > temp_array[i + 1])
			{
				int temp;
				temp = temp_array[i];
				temp_array[i] = temp_array[i + 1];
				temp_array[i + 1] = temp;
			}
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int bubble_array[10]{ 0 };
	int length_of_array = sizeof(bubble_array) / sizeof(bubble_array[0]);

	initialize_array(bubble_array, length_of_array);
	cout << "array before sorting\n";
	print_array(bubble_array, length_of_array);

	bubble_sort(bubble_array, length_of_array);
	cout << "array after sorting\n";
	print_array(bubble_array, length_of_array);

	return 0;
}
