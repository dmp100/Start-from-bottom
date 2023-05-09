using System;
using System.Linq;
public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        //몇 번째 수가 소수인지 아닌지 판별한 bool 변수 선언
        bool[] check = new bool[n];
        
        //정수 1은 소수가 아니므로 check[0] true로 초기화
        check[0] = true;
        
        //2부터 n까지 반복분을 통해 소수를 판별
        for(int i=2; i<n; i++)
        {
            //만약 해당 bool 값이 false이면
            if(!check[i-1])
            {
                //n까지 i 값을 제외하고 i값을 더한 수의 bool 변수를 true로 초기화
                //ex) 만약 i가 2이면 j는4,6,8,10... 이면서 j 자기 외에도 2로 나누어짐. 
                for(int j = i + i; j<=n; j=j+i)
                {
                    check[j-1] = true;
                }
            }
        }
        
        //System.Linq -> Where()로 해당 값이 false로만 이루어지게 초기화
        check = check.Where(x => x == false).ToArray();
        
        //false로 이루어진 check의 길이, 즉 소수의 개수를 반환
        return check.Length;
    }
}