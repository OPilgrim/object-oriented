#include<stdio.h>
#include<math.h>
//主函数，计算sum
int main()
{
	void print(long int sum);
	long int num_one,num_two,sum;
	scanf("%ld%ld",&num_one,&num_two);
	sum=num_one+num_two;
	print(sum);      //对sum进行处理
	return 0;
}
void print(long int sum)
{
	long int num_three;  //num_three用来储存绝对值sum
	int p,q,t;        //用来储存每三个数的分块
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