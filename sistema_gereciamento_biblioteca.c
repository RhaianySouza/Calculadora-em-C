#include <stdio.h>
#include <math.h> //Biblioteca de funções matematicas

float adicao(float x, float y){
    return x+y;
};
float subtracao(float x, float y){
    return x-y;
};
float multiplicacao(float x, float y){
    return x*y;
};
float divisao(float x, float y){
    if(y!=0){
        return x/y;
    }else{
        printf("Erro: Divisão por zero");
        return 0;
    };
};
float modulo(int x, int y){
    return x % y;
};
float raiz(float x, float y){
    if(y==2){
        return sqrt(x);
    }else{
        return pow(x,(1/y));
    } 
};
float potencia(float x, float y){
    return pow(x,y);
};
float seno(float x){
    return sin(x);
};
float cosseno(float x){
    return cos(x);
};
float tangente(float x){
    return tan(x);
};
float funcaologaritimica(float x){
    return log(x);
};
float funcologritimicaBase10(float x){
    return log10(x);
};
float calculadora(int op, float x, float y){
    switch (op){
        case 1:
            return adicao(x,y);
        case 2:
            return subtracao(x,y);
        case 3:
            return multiplicacao(x,y);
        case 4:
            return divisao(x,y);
        case 5:
           return modulo(x,y);
        case 6:
            return raiz(x,y);
        case 7:
            return potencia(x,y);
        case 8:
           return seno(x);
        case 9:
            return cosseno(x);
        case 10:
            return tangente(x);
        case 11:
            return funcaologaritimica(x);
        case 12:
            return funcologritimicaBase10(x);
    };
};
int main() {
    int a = 16;
    int b = 4;

    float add = calculadora(1,a,b);
    printf("Soma de %d e %d e igual a %.4f\n",a,b,add);

    float sub = calculadora(2,a,b);
    printf("Subtracao de %d e %d e igual a %.4f\n",a,b,sub);
    
    float mult = calculadora(3,a,b);
    printf("Multiplicacao de %d por %d e igual a %.4f\n",a,b,mult);

    float div = calculadora(4,a,b);
    printf("Divisao de %d por %d e igual a %.4f\n",a,b,div);

    float mod = calculadora(5,a,b);
    printf("Modulo de %d e %d e igual a %.4f\n",a,b,mod);

    float r = calculadora(6,a,b);
    printf("Raiz de %d em %d e igual a %.4f\n",a,b,r);
    
    float pol = calculadora(7,a,b);
    printf("Potencia de %d e %d e igual a %.4f\n",a,b,pol);

    float funcaolog = calculadora(11,a,b);
    printf("Funcao Logaritimica de %d e igual a %.4f\n",a,funcaolog);

    float funcaolog10 = calculadora(12,a,b);
    printf("Funcao Logaritimica de %d na base 10 e igual a %.4f\n",a,funcaolog10);

    a = 30;
    float sen = calculadora(8,a,b);
    printf("Seno de %d e igual a %.4f\n",a,sen);

    float cos = calculadora(9,a,b);
    printf("Cosseno de %d e igual a %.4f\n",a,cos);

    float tan = calculadora(10,a,b);
    printf("Tangente de %d e igual a %.4f\n",a,tan);
    return 0;
};