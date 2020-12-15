class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string pat=word;
        vector <string> patterns;
        int i=0, n;
        while(pat.length() <=100){
            patterns.insert(patterns.begin(), pat);
            pat+=word;
        }
        n=patterns.size();
        //cout<<i<<endl;
        while(i<n ){
            //cout<<patterns[i]<<endl;
            if (sequence.find(patterns[i]) != string::npos){
                return patterns[i].length()/word.length();
            } 
            i++;
        }
        return 0;
    }
};