// 학습시간 2016년 4월 12일 화요일 오후 11시 42분.
// 장호연.
// K.N.King C Programming.
//
// 원 부피 프로그램 제작.
//

#include <stdio.h>

int main (void)
{
	int radius = 10, volume;
	float pi = 3.14f;
	volume = (4.0f / 3.0f) * pi * radius * radius * radius;

	printf("Radius: %d\n", radius);
	printf("Volume: %d\n", volume);

	return 0;
}