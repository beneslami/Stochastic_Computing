int main(){
    FILE *output = fopen("stream.txt", "w");
    int up, down, res, i = 0, temp;
    char *buff1, buff[20];
    double f;

    printf("Enter probability\n");
    scanf("%lf", &f);
    
    gcvt(f, 10, buff);

    sscanf(buff, "0.%d", &up);

    temp = up;
    while(temp > 0){
        temp = temp/10;
        i++;
    }
    down = (int)pow(10, i);

    srand(time(NULL));
    
    int j;
    for(i = 0; i< down; i++){
        j = rand()%2;
        if(j == 1){
            if((up--) > 0){
                fprintf(output, " %d ", j);    
            }
            else{
                continue;
            }
            
        }
        else{
            fprintf(output, " %d ", j);
        }
    }
    fclose(output);
    return 0;
}
