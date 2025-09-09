#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int guessNr(){
	int cond = 1;
	while(cond == 1){
		int rseed = rand() % 33;
		srand(rseed);
		int rnr = rand() % rseed;
		printf("%d\n",rnr);
		system("sleep 0.5");
		if(rnr == 16){
			clock_t cpu = clock();
			printf("Conseguiste el 16 en %ld clicks / %f seg ",cpu,((float)cpu)/CLOCKS_PER_SEC );
		}
	}

	return 0;
}

int main()
{
	guessNr();
return 0;
}
