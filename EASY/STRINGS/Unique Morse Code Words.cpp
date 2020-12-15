class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> out;
        unordered_set <string> s;
        string code="";
        string codes[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",
                        ".---","-.-",".-..","--","-.","---",".--.",
                        "--.-",".-.","...","-","..-","...-",".--","-..-","-.--",
                        "--.."};
        for(auto word : words){
            code="";
            for(auto ch : word){
                code+=codes[ch-'a'];
            }
            if(s.find(code)==s.end()){
                out.push_back(code);
                s.insert(code);
            }
        }
        return out.size();
    }
};