#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//strlen():문자열의 길이 구하기

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(s)+1);
    
    strcpy(answer,s);
    //answer에 s를 복사(문자열복사)
    
    for(int i=0; i<strlen(s);i++)
    {
        //answer[i]보다 큰 문제가 있는경우 바꾸기
        for(int j=i+1; j<strlen(s);j++)
        {
            if(answer[i]<answer[j])
            {
                char temp=answer[i];
                answer[i]=answer[j];
                answer[j]=temp;
            }
        }
    }
    
    
    
    return answer;
}