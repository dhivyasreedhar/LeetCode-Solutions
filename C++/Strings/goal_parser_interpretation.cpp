class Solution {
public:
    string interpret(string command) {
        string a;
        for(int i=0;i<command.size();i++)
        {if(command[i]=='G')
                a=a+'G';
        else if(command[i]=='('&&command[i+1]==')')
            a=a+"o";
        else if(command[i]=='(' && command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')')
            a=a+"al";}
        
        return a;
            
    }
};
