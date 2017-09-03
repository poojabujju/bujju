#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int grt;
    printf("Enter ten values:");
   
    for (i = 0; i < 10; i++) {
    	scanf("%d", &a[i]);
    }
    
    grt = a[0];
    for (i = 0; i < 10; i++) {
	if (a[i] > grt) {
	grt = a[i];
    }
    }
    printf("
    Grt of ten numbers is %d", grt);
    return 0;
  }

