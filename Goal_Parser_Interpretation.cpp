class Solution {
public:
    string interpret(string command) {
        string str; // creating a new string
        for(int i=0;i<command.size();){ 
            if(command[i]=='G'){  // checks the char
                str+='G';
                i++;  // pointer mives one char head
            }
            else if(command[i+1]==')'){ // as both () and (al) has common '(' we would be checking the second char
                str+='o';
                i+=2; // pointer moves two step ahead
            }
            else{
                str+="al";
                i+=4;  // pointer moves four step head
            }
        }
        return str;
    }
    
};
