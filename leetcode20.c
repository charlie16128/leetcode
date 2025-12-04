bool isValid(char* s) {
    int len = strlen(s);
    char stack[len]; 
    int top = -1;

    for(int i = 0; i < len; i++){
        char c = s[i];

        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[++top] = s[i];
        }
        else{
            if(top == -1) return false;
            char p = stack[top--]
            if((c == ')' && p != '(') || (c == ']' && p != '[') || (c == '}' && p != '{')){
                return false;
            }
        }
    }
    return true;
}