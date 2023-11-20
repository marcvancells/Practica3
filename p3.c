#include <stdio.h>

int main(){
	int c[4];
	int a[4] = {1,2,3,4};
	int b[4] = {5,6,7,8};
	for (int i=0;i<3;i++) {
		c[i]=a[i] * b[i];
	}
}

