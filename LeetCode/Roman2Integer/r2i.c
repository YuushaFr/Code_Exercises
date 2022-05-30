static int value(char c){
    if (c == 'I'){
        return 1;
    }
    else if (c == 'V'){
        return 5;
    }
    else if (c == 'X'){
        return 10;
    }
    else if (c == 'L'){
        return 50;
    }
    else if (c == 'C'){
        return 100;
    }
    else if (c == 'D'){
        return 500;
    }
    else if (c == 'M'){
        return 1000;
    }
    else {
        return 0;
    }
}

int romanToInt(char * s){
    int answer = value(s[0]);
    for (int i=1; i < (strlen(s)); i++){
        int prev = value(s[i-1]);
        int num = value(s[i]);
        if (prev < num){
            answer = answer - prev + (num - prev);
        }
        else 
        {
            answer += num;
        }
    }
    return answer;
}
