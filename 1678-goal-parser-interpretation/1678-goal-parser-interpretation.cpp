class Solution {
public:
    string interpret(string command) {
        string t;
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G')
            {
                t.push_back('G');
            }
            if(command[i]=='(' and command[i+1]==')')
            {
              t.push_back('o');
                i++;
            }
             if((command[i]=='(' and command[i+1]=='a') and (command[i+2]=='l' and command[i+3]==')'))
                {
                  t.push_back('a');
                 t.push_back('l');
                 i+=3;
                }
        
        
    }
        return t;
                }
};