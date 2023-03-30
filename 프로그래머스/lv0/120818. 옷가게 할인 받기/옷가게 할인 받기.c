#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    for(int i=0;i<price;i++)
    {
        if(price>=100000&price<300000) //10만원 '이상' 30만원 '이상' 이니까 30만원을 넘어선 안됌
        {
            answer=price*0.95;  //95%=100%-5% 할인율을 나타내는 비율 값임.      
        }
        else if(price>=300000&price<500000)
        {
            answer=price*0.9;
        }
        else if(price>=500000)
        {
            answer=price*0.8;
        }
        else
            answer=price;
        return answer;
    }
    return answer;
}