public class Solution {
    public int solution(string[] s1, string[] s2) {
        int answer = 0;
        
        for(int i = 0; i < s1.Length; i++)
        {
            for(int j = 0; j < s2.Length; j++)
            {
                // Equals()는 string의 값을 비교해준다.  ==는 string의 참조비교이다.
                if(s1[i].Equals(s2[j]))
                {
                    answer++;
                }
            }
        }
        return answer;
    }
}