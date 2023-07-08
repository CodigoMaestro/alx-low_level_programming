#include <stdio.h>

void print_to_98(int n){
	int i;

	if (n <= 98){
		for (i = n; i <= 98; i++){
			printf("%d", i);
			if (i != 98){
				printf(", ");
			}
		}
	}
	else{
		for (i = n; i >= 98; i--){
			printf("%d", i);
			if (i != 98){
				printf(", ");
			}
		}
	}
	printf("\n");

}

int main(void){
	print_to_98(-10);
	printf("\n");
	print_to_98(98);
	return 0;
}
