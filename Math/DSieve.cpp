ll sumDivisors[LIM];
void sieve(){
    for(int i=1;i<LIM;i++){
        for(int j = i;j<LIM;j+=i){
            sumDivisor[j]+=i;
        }
    }
}

ll numDivisors[LIM];
void sieve(){
    for(int i=1;i<LIM;i++){
        for(int j = i;j<LIM;j+=i){
            sumDivisor[j]++;
        }
    }
}