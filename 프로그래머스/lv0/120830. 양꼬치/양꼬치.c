//10인분->음료수 1개
//1인분-12000 음료수 2000

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
		int answer = 0;
			answer=(n*12000)+((k-(n/10))*2000); //k는 시킨음료수 가격, n/10은 서비스로 받은 음료수 가격
		return answer;
	}




//int solution(int n, int k) {
  
//    for(int i=0;i<n;i++)
//   {
//        n=(n*12000)+
//    }
//}

