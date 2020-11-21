//模拟实现库函数strlen
#if 0
#include<stdio.h>
#include<assert.h>
#include<windows.h>
int my_strlen(char *p){
	assert(p != NULL);
	int count = 0;
	while (*p){
		p++;
		count++;
	}
	return count;
}
int main(){
	char *p = "abcfdrf";
	int ret = my_strlen(p);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif

//实现strcpy
#include<stdio.h>
#include<assert.h>
#include<windows.h>
char* my_strcpy(char*str2, const char*str1){
	assert(str1 != NULL);
	char * cp = str2;
	while (*cp++ = *str1++){
	}
	return str2;
}

int main(){
	char *arr1 = "cool16tguy";
	char arr2[20];
	printf("%s\n", my_strcpy(arr2, arr1));
	system("pause");
	return 0;
}
