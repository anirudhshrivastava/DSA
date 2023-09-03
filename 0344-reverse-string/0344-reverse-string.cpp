class Solution {
public:
   
    void reverseString(vector<char>& s) {
        int len =s.size();
        int st=0;
        int e=len-1;
        while(st<e)
        {
            swap(s[st++],s[e--]);
        } 
    }
};