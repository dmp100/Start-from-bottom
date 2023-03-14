#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    
    int sum=0;
    for(int i=0;i<=n;i++) //입출력 예처럼 n이 10이나 4 처럼 작은 수인 경우도 다 해결되게끔 설계해야함. 처음부터 1000으로깔고가면 1000까지 숫자가 반복됨.{반복횟수}
    {
        if(i%2==0) //짝수 구하는 방법.
        sum+=i; //짝수들 더하기
    }
    return sum;
}
