int solution(int year) {
    int mini = 0;
    int maxi = 0;
    for (int i = 0; i < 23; i++){
        mini = (i-1)*100+1;
        maxi = i*100;
        if (mini <= year && year <= maxi){
            return i;
        }
    }
}
