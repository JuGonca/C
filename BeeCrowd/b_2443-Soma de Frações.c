//2443
//Soma de Frações

#include <stdio.h>

typedef struct{
	int n;//Numerador
	int d;//Denominador
}Fracao;

int MDC(int a, int b){
	if(a < 0)
		a = -a;
	if(b < 0)
		b = -b;
	
	if(a % b == 0)
		return b;
	else
		return MDC(b, a%b);
}

Fracao Soma(Fracao x, Fracao y){
	Fracao res;
	
	res.n = (x.n * y.d + y.n * x.d);
	res.d = (x.d * y.d);
	
	int mdc;
	mdc = MDC(res.n, res.d);
	res.n = res.n/mdc;
	res.d = res.d/mdc;
	
	return res;
}

int main(){
	int a, b, c, d;
	Fracao x, y, fSoma;
	
	printf("Digite os valores de a b c d: \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	x.n = a;
	x.d = b;
	
	y.n = c;
	y.d = d;
	
	fSoma = Soma(x, y);
	
	printf("%d %d\n", fSoma.n, fSoma.d);
	
	
	
}