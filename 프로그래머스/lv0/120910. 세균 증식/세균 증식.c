#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) { //매개변수 n과 t
    int answer = 0;
    for(int i=1;i<=t;i++) //
    {
        n*=2; //n=n*2 ->n마리가 2배늘어남(for문에서 t시간에 따라)
    }
    return n;
        
    return answer;
}