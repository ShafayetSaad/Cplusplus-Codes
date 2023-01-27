**Problem#1:** Write a C program to accept two integers and check whether they are equal or not.

```c
#include <stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a==b){
		printf("Number1 and Number2 are equal\n");
	}
	else{
		printf("Number1 and Number2 are not equal\n");
	}
	return 0;
}
```

**Output:**

Equal