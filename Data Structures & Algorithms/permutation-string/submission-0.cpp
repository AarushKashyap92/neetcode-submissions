class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> freq1 (26,0);
        vector <int> freq2 (26,0);

        int n = s1.size();

        if(n > s2.size()){
            return false;
        }

        int l = 0;
        int r = n-1;

        for(char ch : s1){
            freq1[ch -'a']++;
        }

        while(r < s2.size()){

            for(int k=l ; k<=r ; k++){
                freq2[s2[k] - 'a']++;
            }

            if(freq1 == freq2){
                return true;
            }
            else{
                fill(freq2.begin(), freq2.end(), 0);
            }

            l++;
            r++;
        }

        return false;
    }
};