// 2016년 4월 12일, 화요일 학습.
// 장호연.
// K.N.King C Programming.
//

#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165)/166);
}
