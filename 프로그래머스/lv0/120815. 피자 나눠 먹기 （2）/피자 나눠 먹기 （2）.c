#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    
    while(1)
    {
        if ((6 * answer)%n !=0)
            answer++;
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