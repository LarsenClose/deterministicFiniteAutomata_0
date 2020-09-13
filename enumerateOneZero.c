#include <stdio.h>
#include <stdlib.h>

int print_binary(int LENGTH)
{
	if(!LENGTH){
		return 0;
	}
	int n = 1<<LENGTH, i;
	if  (n<=0){
		return 0;
	}

	for(i=0;i<n;i++){
		int bit = 1<<LENGTH - 1;
		while ( bit ) {
			printf("%d", i & bit ? 0 : 1);
			bit >>= 1;
			}
		printf("\n");
	}
	return print_binary(LENGTH -1);
}

int main(int argc, char *argv[]){

      if(argc<=1) {
      printf("Requires single integer argument");
      exit(1);
    }
		int LENGTH = atoi(argv[1]);
		print_binary(LENGTH);

}
