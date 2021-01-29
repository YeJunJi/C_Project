#include <stdio.h>

int main(){
	int b1,b2,b3,c,s,pb,pd;
	scanf("%d %d %d %d %d",&b1,&b2,&b3,&c,&s);
	if (b1<b2){
		if(b1<b3)
			pb = b1;
		else
			pb = b3;
	}
	else
		if(b2<b3)
			pb = b2;
		else
			pb = b3;
	if(c<s)
		pd = c;
	else
		pd = s;
	int set_price = pd+pb-50;
	printf("%d", set_price);
}