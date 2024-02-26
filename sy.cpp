#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define NUM 5

int max3(int n1,int n2,int n3)
{
	int max;
	max=(n1 > n2) ? n1 : n2;
	if (max < n3)   max = n3;
	return max;
}


int squareddifference(int n1, int n2) {
	return (n1 > n2) ? n1 * n1 - n2 * n2 : n2 * n2 - n1 * n1;
}


double power(double n1, int n2) {
	int n3;
	for (n3 = 1; n3 < n2; n3++) {
		n1 *= n1;
	}
	return n1;
}


void put_stars(int n1,int ch) {
	while (n1-- > 0)
		putchar(ch);
}


int scan_pint(void) {
	int n1;
	do {
		scanf("%d", &n1);
		if (n1 < 0)
			printf("no\a");
	} while (n1 < 0);
	return n1;
}
int rev_int(int n2) {
	int n3 = 0;
	do {
		n3 = n3 * 10 + n2 % 10;
		n2 /= 10;
	} while (n2 > 0);
	return n3;
}


int max_of(int n1[], int n2) {
	int n3;
	int max = n1[0];
	for (n3 = 1; n3 < n2; n3++)
		if (n1[n3] > max)
			max = n1[n3];
	return max;
}


void set_zero(int n1[], int n2) {
	int n3;
	for (n3 = 0; n3 < n2; n3++)
		n1[n3] = 0;
}
void print_array(const int n1[], int n2) {
	int n3;
	for (n3 = 0; n3 < n2; n3++)
		printf("%d ", n1[n3]);
}


#define FAILED -1
int search(const int n1[], int key, int n2) {
	int n3 = 0;
	while(1){
		if (n3 == n2)
			return FAILED;
		else(n1[n3] == key);
			return n3;
		n3++;
	}
}


int main(void)
{
	//printf("me name is tangzubo.\nare you ok\a\n");

	/*int x = 43;
	int y = x + 34;
	printf("%d\n", x);
	printf("%d\n", y);*/


	/*int a;
	printf("");
	scanf("%d", &a);
	printf("%d",7+5* a);*/


	/*puts("vbn");//能换行？
	int x, y;
	printf("");     scanf("%d", &x);
	printf("");     scanf("%d", &y);
	printf("%d\n",x+y);*/


	/*int c, k, g;
	printf("");   scanf("%d", &c);
	printf("");   scanf("%d", &k);
	printf("");   scanf("%d", &g);
	printf("%d\n", c * k * g);*/


	/*int a;
	printf("");
	scanf("%d", &a);
	printf("%d", a % 10);*/


	/*int a, s;
	a = -5;        s = 2;
	printf("%d %d", a / s,a%s);*/


	/*int a;      double b;
	b = 2.64;
	scanf("%d" ,&a);
	printf("%d %f", -a,b);*/


	/*double a, b;
	printf("");   scanf("%lf", &a);
	printf("");   scanf("%lf", &b);
	printf("%f\n",a + b);
	printf("%f\n",a - b);
	printf("%f\n",a * b);
	printf("%f\n",a / b);*/


	/*int a, b;
	printf("");   scanf("%d", &a);
	printf("");   scanf("%d", &b);
	printf("%f", (a + b) / 2.0);
	printf("%f", (double)(a + b) / 2);*/


	//printf("%d\n %04d\n %4d\n %-4d\n\n",123,123,123,123);
	//printf("%f\n %07.2f\n %7f\n %-7f ", 123.12,123.12,123.12,123.12);


	/*int a;
	scanf("%d", &a);                               //d为什么不能换成f?
	printf("%.1f", (a - 100) * 0.9);*/


	/*int a, b;
	scanf("%d", &a);
	if (a % 5)     printf("no");
	else   printf("yes");*/


	/*int a, b;
	scanf("%d", &a);   scanf("%d", &b);
	if (a == b)
		puts("yes");   else puts("no");
	if (a != b)
		puts("no");    else puts("yes");*/


		/*int a;
		scanf("%d", &a);
		if (a > 0)        puts("+");
		else if (a == 0)  puts("=");
		else              puts("-");*/


		/*int a, b;                           //比大小 1
		scanf("%d", &a);   scanf("%d", &b);
		if (a > b)        puts(">");
		else              puts("<");*/


		/*int a, b, max;                          //比大小 2
		scanf("%d", &a);   scanf("%d", &b);
		max = (a > b) ? a : b;
		printf("%d", max);*/


		/*int a;
		scanf("%d", &a);
		if (a > 0)                           //这东西只能判定整数，要改
			if (a % 2)
				puts("奇数");
			else
				puts("偶数");
		else
			puts("no\a");*/


			/*int a, b, c, max;
			scanf("%d", &a);   scanf("%d", &b);   scanf("%d", &c);
			max = a;
			if (b > max)max = b;
			if (c > max)max = c;
			printf("%d", max);*/


			/*int a, b, max, min;
			scanf("%d", &a);   scanf("%d", &b);
			if (a > b) { max = a; min = b; }
			else { max = b; min = a; }
			printf("%d\n", max);                     //为什么printf不能换成puts?
			printf("%d\n", min);*/


			/*int month;
			scanf("%d", &month);
			if (month >= 3 && month <= 5)
			printf("%d春", month);
			else if ( month==12||month==1||month==2)    //左值是什么鬼？
			printf("%d冬", month);
			else
			printf("no\a", month);*/


			/*int a, b, c;
			scanf("%d", &a);   scanf("%d", &b);   scanf("%d", &c);
			if (a == b && b == c && a == b)   printf("3");
			else if (a == b || b == c || a == c)   printf("2");
			else printf("0");*/


			/*double a, b, c;
			scanf("%lf", &a);   scanf("%lf", &b);
			c = (a - b > 0) ? (a - b) : (b - a);
			if (c >= 11)   printf(">=11");
			else   printf("<=10");*/


			/*int a;
			scanf("%d", &a);
			switch (a % 5) {                   //switch括号中必须为整数！！！
			case 0:printf("0");   printf("00");   break;
			case 1:printf("11");
			case 2:printf("1");   break;
			case 3:
			case 4:printf("2");   break;
			}*/


			/*int retry;
			do {
				int a, yes;
				scanf("%d", &a);
				if (a % 2)
					puts("1");
				else   puts("2");
				printf("在来一次？yes or no");       //我想改个yes都不行
				scanf("%d", &retry);
			} while (retry==1);*/


			/*int hand;
			do { puts("出：1or2or3"); scanf("%d", &hand);
			} while (hand < 1 || hand>4);            //hand < 1 || hand>4=!(!hand < 1 && !hand>4)
			printf("you chose:");
			switch (hand) {
				case 1:printf("1"); break;
				case 2:printf("2"); break;
				case 3:printf("3"); break;
			}*/


			/*double a = 0, b = 0; int c;
			do {
				double d;
				printf("输入:");   scanf("%lf",&d);
				a += d;   b++;
				printf("yes/1 or no/2:");   scanf("%d", & c);
			} while (c == 1);
			printf("sum:%.2f,p:%.2f", a,a / b);*/


			/*int a;
			scanf("%d", &a);
			while (a >= 0) {
				printf("%d ", a--);
			}*/


			/*int a, b = 0;
			printf("输入:");   scanf("%d", &a);
			while (b <=a)
				printf("%d ",b++ );*/


				/*int a, c = 1;
				printf("输入:");   scanf("%d", &a);
				while (c <= a) {
					printf("%d", c);
					c *= 2;
				}*/


				/*int a;
				scanf("%d", &a);
				while (a-- > 0)
				putchar('*');*/


				/*int a = 0;   int num, b;
					printf("几个：");   scanf("%d", &num);                //关于a++与++a之间的一些不同还需要训练
					while (a<num) {
						b = num;
						printf("第%d个：",++a );   scanf("%d", &b);
					}*/


					/*int a, b;
					scanf("%d", &a);
					b = a;
					if (a <= 0)
						puts("no\a");
					else
						while (a > 0) {
							printf("%d??????????????????%d",b, a % 10);
							a /= 10;
						}
					puts("????");*/


					/*int a, b, c, d = 0;
					printf("????????????");   scanf("%d", &a);
					for (b = 1; b <= a; b++) {
						printf("????%d????:", b);   scanf("%d", &c);
						d += c;
					}
					printf("num=%d,p=%.2f", d, (double)d / a);*/


					/*int a, b, c = 0;
					printf("input:");   scanf("%d", &a);
					for (b = 1; b <= a; b++) {
						c += b;
					}
					printf("from 1 to %d:%d", a, c);*/


					/*int a, b, c;
					printf("input:");   scanf("%d", &a);
					for (b = 1, c = 1; b <= a; ++c) {
						b++; c = c % 10;
						printf("%d", c);
					}*/


					/*int a, b;
					for (a = 1; a < 10; a++) {
						for (b = 1; b < 10; b++){
							int c = a * b;
						if (c / 10 == 3 || c % 10 == 3)
							break;
						printf("%-3d", c);
					}
						printf("\n");
					}*/


					/*int a, b;
					for (a = 1; a < 10; a++) {
						for (b = 1; b < 10; b++) {
							int c = a * b;
							if (c / 10 == 3 || c % 10 == 3) {
								printf("   ");
								continue;
							}
							printf("%-3d", c);
						}
						putchar('\n');
					}*/



					/*int a, b, c, d;
					printf("kuang:");    scanf("%d", &a);
					printf("long:");    scanf("%d", &d);
					for (b = 1; b <= a; b++) {
						for (c = 1; c <= d; c++)
							printf("*");
						putchar('\n');
					}*/



					/*int a, b, c;
					scanf("%d", &a);
					for (b = 1; b <= a; b++) {
						for (c = 1; c <= b; c++)
							printf("*");
						putchar('\n');
					}*/



					/*int a;
					do {
						int b, c;
						do {
							printf("input:");   scanf("%d", &b);
							if (b < 1)
								puts("no\a");
						} while (b < 1);
						for (c = 1; c <= b; c++)
							printf("*");
						putchar('\n');
						printf("yes-1/no-2 :");   scanf("%d", &a);
					} while (a == 1);*/


					/*int a, b[5];
					for (a = 0; a < 5; a++)
						b[a] = a + 1;
					for (a = 0; a < 5; a++)
						printf("%d=%d\n", a + 1, b[a]);*/


						/*int a[5] = {1,4,5,};
						int b[5],c;
						for (c = 0; c < 5; c++) {
							b[c] = a[c];
						}
						puts("a   b");
						for (c = 0; c < 5; c++)
							printf("%d   %d\n",a[c],b[c]);*/


							/*int a, b[5];
							for (a = 0; a < 5; a++)
								scanf("%d", &b[a]);
							for (a = 0; a < 5; a++)
								printf("%d:%d\n", a, b[a]);*/


	;/*int a, b[7];
		for (a = 0; a < 7; a++) {
			printf("%d:", a);	scanf("%d", &b[a]);
		}
		for (a = 0; a < 3; a++) {
			int c = b[a];
			b[a] = b[6 - a];
			b[6 - a] = c;
		}
		for (a = 0; a < 7; a++)
			printf("%d:%d\n", a, b[a]);*/


			/*int a, b[NUM], sum = 0;
			for (a = 0; a < NUM; a++) {
				printf("%d:", a + 1);   scanf("%d", &b[a]);
				sum += b[a];
			}
			printf("sum:%.1d,put:%.1f", sum, (double)sum / NUM);*/


			/*int a;
			int	b[NUM];
			int max, min;
			for (a = 0; a < NUM; a++) {
				printf("%d:", a + 1);   scanf("%d", &b[a]);
			}
			max = min = b[0];
			for (a = 1; a < NUM; a++) {
				if (b[a] > max)   max = b[a];
				if (b[a] < min)   min = b[a];
			}
			printf("min=%d,max=%d", min, max);*/


			/*int a, b;
			int num;
			int c[NUM], d[11] = { 0 };
			printf("input num:");
			do {
				scanf("%d", &num);
				if (num<1 || num>NUM)
					printf("/aNO!");
			} while (num<1 || num>NUM);
			printf("enter scare:");
			for (a = 0; a < num; a++) {
				do {
					printf("%.2d:", a + 1);   scanf("%d", &c[a]);
					if (c[a] < 1 || c[a]>100)
						printf("/aNO!");
				} while (c[a] < 1 || c[a]>100);
				d[c[a] / 10]++;
			}
			puts("/n--------");
			printf("   100:");
			for (b = 0; b < 10; b++) {
				printf("")
			}*/


			/*int a, b;
			int c[4][3] = { {45,59,54},{85,65,94},{45,85,25},{65,25,45} };
			int d[4][3] = { {45,59,96},{12,65,94},{45,85,25},{65,25,45} };
			int sum[4][3];
			for (a = 0; a < 4; a++) {
				for (b = 0; b < 3; b++)
					sum[a][b] = c[a][b] + d[a][b];
			}
			puts("one");
			for (a = 0; a < 4; a++) {
				for (b = 0; b < 3; b++)
					printf("%4d", c[a][b]);
				putchar('\n');
			}
			puts("two");
			for (a = 0; a < 4; a++) {
				for (b = 0; b < 3; b++)
					printf("%4d", d[a][b]);
				putchar('\n');
			}
			puts("sum");
			for (a = 0; a < 4; a++) {
				for (b = 0; b < 3; b++)
					printf("%4d", sum[a][b]);
				putchar('\n');
			}*/


			/*int a, b, c;   //6
			scanf("%d", &a);    scanf("%d", &b);   scanf("%d", &c);
			printf("%d", max3(a, b,c));*/


			/*int a, b;   //15
			scanf("%d", &a);   scanf("%d", &b);
			printf("%d", squareddifference(a, b));*/


			/*double a;   int b;   //20
			scanf("%lf", &a);   scanf("%d", &b);
			printf("%.2f", power(a,b));*/


			/*int a, b;   //29
			scanf("%d", &a);
			for (b = 1; b <= a; b++) {
				put_stars(b, '*');
				puts("");
			}*/


			/*int a = scan_pint();   //35-51
			printf("%d", rev_int(a));*/


			/*int a, eng[NUM], mat[NUM], max_e, max_m;   //54
			printf("%d\n", NUM);
			for (a = 0; a < NUM; a++) {
				printf("[%d]eng:", a + 1);   scanf("%d", &eng[a]);
				printf("mat:");   scanf("%d", &mat[a]);
			}
			max_e = max_of(eng, NUM);
			max_m = max_of(mat, NUM);
			printf("eng:%d\nmat:%d", max_e,max_m);*/

			/*int a[] = {1,2,3,4,5};   //64-73
			int b[] = { 3,2,1, };
			printf("a=");   print_array(a, 5);   putchar('\n');
			printf("b=");   print_array(b, 3);   putchar('\n');
			set_zero(a, 5);   set_zero(b, 3);
			printf("a=");   print_array(a, 5);   putchar('\n');
			printf("b=");   print_array(b, 3);*/


	int a, key, b;
	int c[NUM];
	for (a = 0; a < NUM; a++) {
		scanf("%d", &c[a]);
	}
	printf("search:");
	scanf("%d", &key);
	b = search(c, key, NUM);
	if (b == FAILED)
		puts("\aNO");
	else
		printf("%d??%d????.", key, b + 1);



	return 0;
}