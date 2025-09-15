#include <stdio.h>


float funtion_moadel(char text[20],int zrib) 
{
	
	
	float moadel  = 0;
	
	for(;;)
	{	
		
		moadel = 0;
		
		printf(text);
		
		if (scanf("%f",&moadel) == 1)
		{
		
			if (moadel <= 0)
				printf("مشکلی پیش آمده است ورودی منفی است  \n");
			
			else if (moadel <= 20) 
			{	
				moadel *= zrib;
				break;
			}
			
			else 
				printf("عدد وارد شده بیشتر از 20 است\n");
		}
		else
		{
			printf("ورودی عدد نمی باشد!\n");
			while(getchar() != '\n' && getchar() != EOF);
		}
	}
	
	return moadel;
}


int main()
{
	
	float diplom = 0;
	
	diplom += funtion_moadel("معدل پایه دهم: ",10);
	diplom += funtion_moadel("معدل پایه یازدهم: ",10);
	diplom += funtion_moadel("معدل پایه دوازدهم: ",20);
	
	printf("معدل کل: %f\n",diplom / 40);
}
