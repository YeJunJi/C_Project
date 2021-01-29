#include <stdio.h>

int main(){
	int A,B,C,N;
	scanf("%d %d %d",&A,&B,&C);
	if((A<B && B<C)||(C<B && B<A)){
		N = B;
	}
	else if((B<C && C<A)||(A<C && C<B)){
		N = C;
	}
	else if((C<A && A<B)||(B<A && A<C))
		N = A;
	else if(A==C)
		N = A;
	else if(C==B)
		N = C;
	else if(B==A)
		N = B;
	printf("%d",N);
}