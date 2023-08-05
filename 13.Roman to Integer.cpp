class Solution {
public:
    int check(char c1){
        int ans=0;
            if(c1=='I')
                ans+=1;
            else if(c1=='V')
                ans+=5;
            else if(c1=='X')
                ans+=10;
            else if(c1=='L')
                ans+=50;
            else if(c1=='C')
                ans+=100;
            else if(c1=='D')
                ans+=500;
            else if(c1=='M')
                ans+=1000;
            return ans;
    }

    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='C'&&s[i+1]=='M'||s[i]=='X'&&s[i+1]=='C'||s[i]=='I'&&s[i+1]=='V'||s[i]=='I'&&s[i+1]=='X'||s[i]=='C'&&s[i+1]=='D'||s[i]=='X'&&s[i+1]=='L'){
                ans+=check(s[i+1])-check(s[i]);
                i+=1;
            }
            else{
                ans+=check(s[i]);
            }
            cout<<"ans = "<<ans<<endl;
        }
        return ans;
    }
};