class Solution {
public:
    int romanToInt(string s) {
        s=s+"@";
        int num=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I' && s[i+1]=='V')
            {
                num=num+4;
                i=i+1;
            }
            else if(s[i]=='I' && s[i+1]=='X')
            {
                num=num+9;
                i=i+1;
            }
            else if(s[i]=='X' && s[i+1]=='L')
            {
                num=num+40;
                i=i+1;
            }
            else if(s[i]=='X' && s[i+1]=='C')
            {
                num=num+90;
                i=i+1;
            }
            else if(s[i]=='C' && s[i+1]=='D')
            {
                num=num+400;
                i=i+1;
            }
            else if(s[i]=='C' && s[i+1]=='M')
            {
                num=num+900;
                i=i+1;
            }
            else if(s[i]=='V' && s[i+1]=='I')
            {
                num=num+5;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                if(s[i]=='V')
                {
                    num=num+3;
                }
                else if(s[i]=='X')
                    num=num+8;
                else
                    i=i-1;
            }
            else if(s[i]=='X' && s[i+1]=='I')
            {
                num=num+10;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                if(s[i]=='V')
                {
                    num=num+3;
                }
                else if(s[i]=='X')
                    num=num+8;
                else
                    i=i-1;
            }
            else if(s[i]=='L' && s[i+1]=='I')
            {
                num=num+50;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                if(s[i]=='V')
                {
                    num=num+3;
                }
                else if(s[i]=='X')
                    num=num+8;
                else
                    i=i-1;
            }
            else if(s[i]=='C' && s[i+1]=='I')
            {
                num=num+100;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                if(s[i]=='V')
                {
                    num=num+3;
                }
                else if(s[i]=='X')
                    num=num+8;
                else
                    i=i-1;
            }
            else if(s[i]=='D' && s[i+1]=='I')
            {
                num=num+500;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                if(s[i]=='V')
                {
                    num=num+3;
                }
                else if(s[i]=='X')
                    num=num+8;
                else
                    i=i-1;
            }
            else if(s[i]=='M' && s[i+1]=='I')
            {
                num=num+1000;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                if(s[i]=='V')
                {
                    num=num+3;
                }
                else if(s[i]=='X')
                    num=num+8;
                else
                    i=i-1;
            }
            else if(s[i]=='I' && s[i+1]=='I')
            {
                num=num+1;
                i=i+1;
                while(s[i]=='I')
                {
                    num=num+1;
                    i=i+1;
                }
                i=i-1;
            }
            else if(s[i]=='I' && s[i+1]!='I')
            {
                num=num+1;
            }
            else if(s[i]=='V' && s[i+1]!='I')
            {
                num=num+5;
            }
            else if(s[i]=='X' && s[i+1]!='I')
            {
                num=num+10;
            }
            else if(s[i]=='L' && s[i+1]!='I')
            {
                num=num+50;
            }
            else if(s[i]=='C' && s[i+1]!='I')
            {
                num=num+100;
            }
            else if(s[i]=='D' && s[i+1]!='I')
            {
                num=num+500;
            }
            else if(s[i]=='M' && s[i+1]!='I')
            {
                num=num+1000;
            }
            
        }
        return num;
    }
};
