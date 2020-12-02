#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int day_one(bool part_two) {

	FILE* file = fopen("data/input", "r");
	int nums[200];
	int count = 200;
	int n = 0, i = 0;
	while(fscanf(file, "%d", &n) > 0) { // Read input file and save to array.
		nums[i++] = n;
	}
	for (int i = 0; i < count; ++i) // Iterate through list initially, captures first int in nums[i]
	{
		for (int n = 0; n < count; ++n) // Captures second int in nums[n]
		{
		if (part_two) { // Solve part two instead of part one
			for (int m = 0; m < count; ++m){
				if (nums[i] + nums[n] + nums[m] == 2020 ){
					int part_two_product;
					part_two_product = nums[i] * nums[n] * nums[m];
					return part_two_product;
				} 
			}
		} else if (nums[i] + nums[n] == 2020){ 
			// printf("%d + %d = 2020\n", nums[i], nums[n]);
			int product; // Can declare here as this returns immediately after, won't re-run in for loop wasting memory.
			product = nums[i] * nums[n];
			return product;
			}
		}
	}
	return 0;

}

int main() {
	int day1;
	day1 = day_one(true);
	printf("Value is: %d\n", day1);
	return 0;

}

