
/*Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.*/

Class Solution
{
  public:
      int lenghtofLastWord(String s) {

      int count = 0;
      for(int i = s.length() - 1; i >= 0; i--){
      if(s[i] != ' '){
          count++;
      }
      else{
          if(count > 0)
            return count++;
      }
  };
