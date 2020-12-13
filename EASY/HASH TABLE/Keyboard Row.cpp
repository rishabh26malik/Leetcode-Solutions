class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p'};
        unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}; 
        unordered_set<char> row3 { 'z', 'x', 'c', 'v', 'b' ,'n', 'm'};
        vector <unordered_set<char>> board{row1, row2, row3};
        int flag, i, j;
        vector <string> out;
        for(auto word : words){
            if(board[0].find(char(tolower(word[0])))!=board[0].end())
                j=0;
            else if(board[1].find(char(tolower(word[0])))!=board[1].end())
                j=1;
            else
                j=2;
            flag=1;
            
            for(auto ch : word){
                
                if( board[j].find(char(tolower(ch)))==board[j].end() ){
                    flag=0;
                    break;
                }
            }
            cout<<endl;
            if(flag)
                out.push_back(word);
        }
        return out;
    }
};