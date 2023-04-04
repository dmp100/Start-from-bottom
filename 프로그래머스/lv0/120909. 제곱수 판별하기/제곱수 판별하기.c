#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int k=0;
    for(int i=1;i<=n;i++) //for문에서 바로 돌리기보다
    {
        if(i*i==n)
            answer=1;
    }
    if(answer)  // 한번 나와서 하기
        return 1;
    else
        return 2;
    
    return answer;
}