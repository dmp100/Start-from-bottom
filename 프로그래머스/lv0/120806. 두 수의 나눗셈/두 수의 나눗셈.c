#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    
    double answer =(double) num1/num2;
    answer=answer*1000;
    return (int) answer;
    
}

// 1. 내가 처음에 푼 방법

// double answer = numA/numB;
 //   numA=num1-(int)num1; //A 와 B를 나눠서 형변환하는 방법 Ex)3.14-3
 //   numB=num2-(int)num2;
   // return answer*1000;
    

// 2. 찾아본 방법(답안)
    //    double result = (double) num1 / num2; //double로 result 자체 형변환
     //   result = result * 1000; //result 변수 재생성하기
      //  return  (int) result; //result 형변환

// 3.문제점
//형변환,변수,함수 의 상관관계를 생각못함
  