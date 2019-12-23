#include <stdio.h>
int timhangmax(int a[][4]){
	int max,hang=0;
	for (int i = 0; i < 4; ++i)
	{	
		int total = 0;
		for (int j = 0; j < 4; ++j)
		{
			total+= a[i][j];
		}
		if(i==0){
			max = total;
		} 
		if(total > max){
			max = total;
			hang = i;
		}
	}
	return hang;
}
int main(){
	int a[4][4] = {1,5,2,5,2,63,7,1,3,5,73,5,3,6,5,22};
	printf("Hang co tong lon nhat: %d\n",timhangmax(a));
	return 0;
}
