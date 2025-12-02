// malloc_arr.c
// mem_arr.c
#include <stdio.h>
#include <malloc.h>

int main(void) {
	int* p_nums_list,
		count = 0,
		sum = 0,
		limit = 0,
		i;

	printf("사용할 최대 개수를 입력하세요: >>> ");
	scanf_s("%d", &limit);

	p_nums_list = (int*)malloc(sizeof(int) * limit);	

	while (count < MAX_COUNT) {
		printf("숫자를 입력하세요 (9999를 누르면 종료): ");
		scanf_s("%d", p_nums_list + count);

		if (*(p_nums_list + count) == 9999) break;

		count++; // 입력된 횟수를 계산함
	}

	// 입력된 횟수만큼 숫자를 출력함
	for (i = 0; i < count; i++) {
		if (i > 0) printf("+"); 
		printf("%d", *(p_nums_list + i)); // 변경
		sum = sum + *(p_nums_list + i); // 변경	
	}
	printf("= %d\n", sum);
	free(p_nums_list); // 사용했던 메모리를 제거함

	return 0;
}