#include<stdio.h>

double variance(double squares,int count, double a){
  double b;
  b=(squares/count)-(a*a);
  return b;
}

double mean(double sum, int count){
  return sum/count;
}


int main(){
    int count=0;
    double sum=0;
    double squares=0;
    double t;
    double a,b;
    FILE*fp=fopen("uni.dat","r");
    while(fscanf(fp, "%lf", &t)!=-1){
        count+=1;
        sum=sum+t;
        squares=squares+(t*t);
    }
    a = mean(sum,count);
    
    b = variance(squares,count,a);

    printf("Mean:%lf,Variance:%lf",a,b);
    fclose(fp);
    //Mean=0.500137, Variance=0.083251
    // Theoretical verification  Q(1.5)
}