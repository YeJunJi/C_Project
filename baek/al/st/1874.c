#include <stdio.h>
/*
    여러개를 나열해서 볼 때는 항상 특수한 지점을 고려한다.
    예를 들어 맨앞과 맨끝 그리고 상황이 바뀔 수 있는 것을 미리 다 생각하고
    상황이 바뀌었을 때 맨앞과 맨끝을 고려해서 다시 봐야한다.
    !!종료조건!! 작성시 종료조건문에 들어가는 변수의 값중 내가 생각하지 못한 것이 있는지 반드시 확인
    조건문 안에 들어가는 변수는 정말 조심해서 생각한다.
*/
int main(){
    // j는 stack의 인덱스, k는 입력받은 문자열의 인덱스, x는 +-저장한 것의 인덱스, flag는 수열이 만들어지는지 아닌지를 저장
    int n, j=0, k=0, x=0, flag = 1;
    scanf("%d",&n);
    int stack[n], seq[n];
    //+와 -를 저장하는 부분
    char answer[2*n];
    //입력 받는 부분
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &seq[i]);
    }
    
    for(int i=1; i<n+1; i++){
        //무조건 스택을 거쳐서 가니까 +해주고 
        stack[j] = i;
        answer[x++] = '+';
        //여기가 핵심부분
        while (1)
        {   
            if(j>=0){
                if(stack[j]==seq[k]){
                    j--;
                    k++;
                    answer[x++] = '-';
                }
                else if(seq[k]<stack[j]){
                    flag = 0;
                    break;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
        j++;
        
    }


    if(flag){
        for(int i=0;i<2*n;i++){
            printf("%c\n", answer[i]);
        }
    }
    else{
        printf("NO");
    }
}