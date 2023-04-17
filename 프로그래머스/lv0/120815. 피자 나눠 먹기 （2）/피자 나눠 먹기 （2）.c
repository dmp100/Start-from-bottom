#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1; //피자 6조각=기본 1판
    
    while(1)
    {
        if ((6 * answer)%n !=0) //6조각*1판을 n으로 나눠서 0이 아니면
            answer++; //1판을 
        else
            break;
    }
    return answer;
}


//나의 답
  //  for(int i=1;i<=n;i++)
  //  {
   //     if(n%6)
    //     return n;
   //     else
    //     return n/2;
   // }
