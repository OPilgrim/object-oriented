#include<stdio.h>
#include<math.h>
//������������sum
int main()
{
	void print(long int sum);
	long int num_one,num_two,sum;
	scanf("%ld%ld",&num_one,&num_two);
	sum=num_one+num_two;
	print(sum);      //��sum���д���
	return 0;
}
void print(long int sum)
{
	long int num_three;  //num_three�����������ֵsum
	int p,q,t;        //��������ÿ�������ķֿ�
	num_three=abs(sum);
	if(num_three<1000&&num_three>=0)
		printf("%ld\n",sum);
	if(num_three>=1000&&num_three<1000000)
	{
		p=num_three%1000;
		q=sum/1000;
		printf("%ld,%03ld\n",q,p);
	}
	if(num_three>=1000000)
	{
		p=num_three%1000;
		q=(num_three%1000000)/1000;
		t=sum/1000000;
		printf("%ld,%03ld,%03ld\n",t,q,p);
	}
	return;
}