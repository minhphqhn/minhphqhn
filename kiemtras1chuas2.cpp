#include <stdio.h>
#include <string.h>
bool check(char a1[],char a2[]){
		int x=0,max=0;
		for (int j=0;j<strlen(a1);j++){
			if (a1[j]==a2[x]){
				x++;
				if (x>max){
					max=x;
				}
			} else {
				x=0;
			}
		}
		if (max==strlen(a2)){
			return true;
		}
	return false;
}
int main (){
	char s1[100],s2[100];
	printf("Nhap vao chuoi s1:\n");
	scanf("%s",s1);
	printf("Nhap vao chuoi s2:\n");
	scanf("%s",s2);
	if (check(s1,s2)){
		printf("Chuoi s2 co nam trong s1");
	} else {
		printf("Chuoi s2 khong nam trong s1");
	}
	return 0;
}
