#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int n)
{
    int answer=0; //answer,a,sum 변수 0,1,1로 초기화
    int a=1;
    int sum=1;
    
    while(1) //while루프돌기
    {
        sum*=a; //sum 변수에 a를 곱한값 할당
        if(sum>n) break;//sum이 n보다 커졌을때 멈추게 된다.
        a++;//그렇지 않으면 a의 값을 1증가, 다음 루프에서 sum에 곱해질 값 구하기
    }
    
    a--; //a의 값을 1 감소시키고 결과값 반환

    return a;
}


        
        
        
      //   int answer = 0;

 //   for(int i = 1; i for(int i = 1; i<12; i++) {
   //     if(n < factorial_fanc(i)) {
   //         answer = i - 1;
   //         break;
    //    }

//int factorial_fanc(int n) {

    //if (n > 1) {
    //    return n * factorial_fanc(n-1);
  //  }
   // else {
   //     return 1;
  //  }

//}