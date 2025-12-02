// 2d_ptr.c
#include <stdio.h>

int main(void) {
	short data = 3,
		* p = &data, // data 변수의 주소
		** p = &p; // 포인터 p의 주소	

	printf("[Before] data: %d\n", data); // 3
	*p = 40;
	printf("[Use *p] data: %d\n", data); // 40
	**p = 500;
	printf("[Use **p] data: %d\n", data); // 500

	return 0;	
}