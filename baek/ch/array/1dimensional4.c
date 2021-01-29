#include <stdio.h>

/*
int main(){
	int rest[10] = {0, };
	int cnt = 0;
	int num;
	for(int i = 0; i<10; i++){
		scanf("%d",&num);
		rest[i] = num % 42;
	}
	for(int i = 0; i<42; i++){
		for(int j = 0; j<10; j++){
			if(rest[j] == i){
				cnt++;
				break;
			}
		}
	}
	printf("%d\n", cnt);
}
*/
/*
int main(){
	int rest[42] = {0,};
	int cnt = 0;
	int num;
	for(int i=0; i<10; i++) {
		scanf("%d",&num);
		for (int j = 0;j < 42; j++){
			if(num % 42 == j)
				rest[j]++;
		}
	}
	for(int i=0; i<42; i++){
		if(rest[i] != 0)
			cnt++;
	}
	printf("%d\n", cnt);
}
*/
/*
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    int rest[42] = {0, };
    int cnt = 0;
    
    for(int i = 0; i<10; i++){
        scanf("%d", &n);
        if(rest[n%42] == 1){
            continue;
        } else {
            rest[n%42] += 1;
            cnt++;
        }
    }
    printf("%d", cnt);
}
*/