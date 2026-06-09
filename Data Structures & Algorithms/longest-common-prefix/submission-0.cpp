class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end()); //sorting will help in identfying the comman character Nlogn
        
        //take first and last string for comparison
         string str1=strs[0];
         string str2=strs[strs.size()-1];
        
         int i=0;
         while(i<str1.length())
         {
            if(str1[i]==str2[i])
            {
                i++;   
            }
            else
            {
                break;
            }
           
         }
         return i==0? "" : str1.substr(0,i);
    }
};