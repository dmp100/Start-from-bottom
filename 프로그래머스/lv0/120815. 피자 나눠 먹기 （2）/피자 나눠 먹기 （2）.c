#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1; //피자 6조각=기본 1판
    
    while(1)
    {
        if ((6 * answer)%n !=0) //6조각*1판을 n으로 나눠서 0이 아니면
            answer++; //계속 answer를 1씩 늘리다보면 answer가 5가 되는때가 되는데 그때 6 * 5는 10으로 나눴을때 나머지가 0이니까
        else
            break; //바깥 while문 브레이크되고 answer 리턴함
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
