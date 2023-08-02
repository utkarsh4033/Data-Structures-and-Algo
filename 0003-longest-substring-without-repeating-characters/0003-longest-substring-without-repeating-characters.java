class Solution 
{
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int res = 0;
        ArrayList<Character> visited = new ArrayList();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i ; j< n ; j++)
            {
               if(visited.contains((s.charAt(j))))
               {
                   visited.clear();
               break;
               }
               else
               {
                  visited.add((s.charAt(j)));
                 if(res < j-i+1)
                  {
                   res = j-i+1;
                  }
               }
            }
        }
    return res;
    }
}