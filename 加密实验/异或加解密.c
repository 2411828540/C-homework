#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	int i,j,key;
	printf("�������ģ�");
    for(i=0; i<100; i++){
        text[i] = getchar();
        if(text[i] == '\n'){
            text[i] = '\0';
            break;
        }
    }
    printf("������Կ��");
    scanf("%d",&key);
    printf("���ܣ�");
    for(j=0;j<i;j++){
        text[j] = text[j] ^ key;
    }
    puts(text);
    printf("���ܣ�");
    for(j=0;j<i;j++){
        text[j] = text[j] ^ key;
    }
    puts(text);
    return 0;
}


 
