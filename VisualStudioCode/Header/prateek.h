int counter = 0;

int add(int x, int y){
    counter++;
    return x+y;
}

int sub(int x, int y){
    counter++;
    return x-y;
}

int calli(){
    return counter;
}