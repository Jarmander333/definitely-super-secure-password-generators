#include <stdio.h>

int main() {
	double i = 0.000001;
	for ( ; ; ) {
		printf("password%f\n", i);
		i+=0.000001;
	}
}
