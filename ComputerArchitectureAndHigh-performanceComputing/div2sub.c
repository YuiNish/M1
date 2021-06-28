#include <stdio.h>
#include <math.h>

int main(void){
	double a = 15.0;
	double b = 4.0;
	double c = 0.0;
	int in1, in2 = 0;

	printf("割られる数:");
	in1 = scanf("%lf", &a);
	printf("割る数:");
	in2 = scanf("%lf", &b);

	if(a >= .0 && b > .0){
		printf("%lf/%lf\n", a, b);
	
		//普通の除算
		c = a/b;
		printf("普通除算:%lf\n", c);

		//除算→減算
		double d = 0.;
		double e = 0.;
		int cou = 0;
		for(int i = 0; ; i++){
			if(fabs(a - b) <= 0.0000001) break;
			for(int j = 0; ; j++){
				if(a<b) break;
				a -= b;
				cou++;
				}
			d += cou * pow(0.1, i); 
			b = b/10.;
			cou = 0;
		}
		printf("除算を減算:%lf\n", d);
	}else printf("対応した入力になってないです");
	return 0;
}

