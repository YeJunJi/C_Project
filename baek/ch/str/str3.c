#include <stdio.h>

int main(){
	char s[100] = {0,};
	scanf("%s",&s);
	int i=99,arr[26];
	for(int j=0;j<26;j++)
		arr[j] = -1;
	while(i>=0){
		if('a'<=s[i] && s[i]<='z')
			arr[s[i]-'a'] = i;
		i--;
	}
	for(int j=0;j<26;j++)
		printf("%d ", arr[j]);
}