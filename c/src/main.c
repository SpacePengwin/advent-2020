#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int day_one(bool part_two) {

	FILE* file = fopen("data/input", "r");
	int nums[1000];
	int count = 0;
	int n = 0, i = 0;
	while(fscanf(file, "%d", &n) > 0) {
		++count;
		nums[i++] = n;

	}
	int product;
	for (int i = 0; i < count; ++i)
	{
		for (int n = 0; n < count; ++n)
		{
		if (part_two) {
			for (int m = 0; m < count; ++m){
				if (nums[i] + nums[n] + nums[m] == 2020 ){
					int part_two_product;
					part_two_product = nums[i] * nums[n] * nums[m];
					printf("%d\n", part_two_product);
					return part_two_product;
				} 
			}
		} else if (nums[i] + nums[n] == 2020){
			// printf("%d + %d = 2020\n", nums[i], nums[n]);
			product = nums[i] * nums[n];
			printf("%d * %d = %d\n", nums[i], nums[n], product);
			return product;
			}
		}
	}
	return 0;

}

int main() {
	int day1;
	day1 = day_one(true);
	return 0;

}

