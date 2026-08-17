class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string word : words) {
            
            int left = 0;
            int right = word.size() - 1;
            
            while(left < right) {
                
                if(word[left] != word[right]) {
                    break;
                }
                
                left++;
                right--;
            }
            
            if(left >= right) {
                return word;
            }
        }
        
        return "";
    }
};