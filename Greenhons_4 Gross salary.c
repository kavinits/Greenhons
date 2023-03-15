#include<stdio.h>
main()
{
	int base_salary=100,hra=10,da=5,ta=8,gross_salary;
	hra=base_salary*hra/100;
	printf("hra=%d\n",hra);
	da=base_salary*da/100;
	printf("da=%d\n",da);
	ta=base_salary*ta/100;
	printf("ta=%d\n",ta);
	gross_salary=base_salary+hra+da+ta;
	printf("total gross salary is=%d", gross_salary);
	
	
	
	
	
}
