class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Approach of matching character by character
        
        string ans="";
        
        //We will take the first string 

        for(int i=0;i<strs[0].length();i++)
        {

            char ch =strs[0][i]; //taking the characters of first string 
           
           bool match=true;

        //now matching with character of first string with other strings    
         for(int j=1;j<strs.size();j++)
         {
            //nonmatch case
            if(strs[j].size()<i||ch!=strs[j][i])
            {
                match=false;
                break;
            }
         }

         if(match==false)
         {
            break;
         }    
        
          ans.push_back(ch);
        }
       
       return ans;
    }
};