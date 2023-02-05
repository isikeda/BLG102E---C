float sum (float x, float y){
    return (x + y);
}

float sub (float x, float y){
    return (x - y);
}

float div (float x, float y){
    return (x == 0 || y == 0) 
            ? 0
            : (x / y);
}

float mult (float x, float y){
    return (x * y);
}

int mod (int x, int y){
    return (x % y);
}

