#include <stdio.h>

void sum(int *a, int n){
	*a += n;
}


int main(){
	int add = 0, n, num, *p = &add;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		sum(p,num);
	}
	printf("%d", *p);
}

int main() {
	int sum = 0;
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		sum += t;
	}
	
}