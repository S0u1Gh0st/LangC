#include<math.h>
#include<stdio.h>
#include<time.h>

int freqofprimes(int n){

	int i,j;
	int freq = n - 1;
	for(i = 2; i <= n; i++)
		for(j = sqrt(i); j > 1; --j)
			if(i % j == 0){
				--freq;
				break;
			}
	return freq;
}

int main()
{

	clock_t cput = clock();
	int f = freqofprimes(9999);
	printf("el numero de primos menor que 10k es %d\n",f);

	cput = clock() - cput;
	printf("%ld Clicks ( %f Segundos)\n",cput,((float)cput)/CLOCKS_PER_SEC);

return 0;
}
