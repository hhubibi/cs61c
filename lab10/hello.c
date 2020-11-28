#include <stdio.h>
#include <omp.h>

int main() {
	omp_set_num_threads(6);
	#pragma omp parallel
	{
		int thread_ID = omp_get_thread_num();
		printf(" hello world %d\n", thread_ID);
	}
}


// int main() {
// 	int a = 7;
// 	#pragma omp parallel if(a) num_threads(6)
// 	{
// 		printf("%d\n", omp_get_thread_num());
// 	}
// }
