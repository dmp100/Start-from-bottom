// 피자1판-7조각

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int n) { //매개변수 n을 받는다.
    int answer = 0; //정수형으로 answer을 초기화
    if(n % 7 == 0){ //n을 7로 나눴을때 나머지가 0인경우 (피자 인당 한조각이 맞을경우)
        answer = n / 7;} //n을 7로나눈다.
    else if(n % 7 != 0){ //반대의 경우일때
        answer = (n / 7) + 1;// +1을해한다
    }
    return answer; //answer 리턴
}      


//int solution(int n)
//{
//   for(int p=1;(p*7)%n!=0;p++)
//      return p;
    
    
//}



    //for(int i=0;i>n;i++)   
  //  {
      //  if()
        
        
   // }
    
  //  int answer = 0;
  //  return answer;
//}