#include<stdio.h>
#include<math.h>
int btod(int);
void dtob(int);
//void dtoh(int);
//int htod(int);
int main()
{
	int ch, n, num;
	printf_s("choose the options \n 1.convert binary to decimal \n 2. convert decimal to binary \n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:
		printf_s("enter the binary number which contains only 0's and 1's");
		scanf_s("%d", &n);
		num = btod(n);
		//dtoh(num);

		
		break;
	case 2:
		printf_s("enter the decimal number");
		scanf_s("%d", &n);
		
		dtob(n);
		
		break;
	default:
		printf_s("enter the valid option");
	}
	scanf_s("%d", &num);
}
int btod(int x)
{
	int rev = x, n = 0, sum = 0, rem = x;
	while (rev != 0)
	{
		rem = rev% 10;
		sum = sum + rem*(int)pow(2, n);
		n++;
		rev = rev / 10;
	}
	return sum;
}
/*void dtoh(int x)
{
	int rev = x, sum = 0, rem = x;
	while (rev != 0)
	{
		rem = rev % 16;
		if (rem < 10)
			printf_s("%d", rem);
		else
			printf_s("%c", rem - 10 + 'A');

		rev = rev / 16;
	}
	return;
}*/
void dtob(int x)
{
	if(x<=0)
		printf_s("1");
		else
		{
			dtob(x/2);
			if(x&1)
			printf_s("1");
			else
			printf_s("0");
		}
	return;
}
