#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//
char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char));

    for(int i=0;i<=num;i++)
    {
        if(num%2==0)
         answer="Even";  //return Even;
        else
         answer="Odd";   //return Odd;
    }
    return answer;
}