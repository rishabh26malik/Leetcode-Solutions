class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i,n,j,c1,c2;
        char tmp;
        if(name.length() > typed.length())
            return false;
        i=j=0;
        n=typed.length();
        while(j<n){
            if(name[i]!=typed[j])
                return false;
            tmp=name[i];
            c1=0;
            while(name[i]==tmp)
            {
                c1++;
                i++;
            }
            c2=0;
            while(typed[j]==tmp)
            {
                c2++;
                j++;
            }
            if(c1>c2)
                return false;
            //while(name[i]==typed[j])
            //    j++;
            //i++;
        }
        return (i==name.length());
        return true;
    }
};