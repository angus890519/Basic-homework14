/* �p������׹��-�򥻽m�ߧ@�~-�@�~14*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/21 10:00*/ 
#include <iostream> //�w�q��ܮw 
//������
/*
��J�G3 5 3�@�@��X�G�i�H����
��J�G5 2 2�@�@��X�G���i�H����
��J�G7 3 4�@�@��X�G���i�H����
��J�G3 7 5�@�@��X�G�i�H����
*/ 
int main()
{
    int Sidelength1,Sidelength2,Sidelength3; //�w�q�T��� 
    printf("�T�ڤ���ण������@�ӤT���ΡC\n");
	printf("�w�q�G�T���Ϊ��T����@�w��������������M�j��ĤT��C\n");
	printf("�п�J�T��������סG");
	scanf("%d%d%d",&Sidelength1,&Sidelength2,&Sidelength3);//��J�T��� 
        if( Sidelength1+Sidelength2>Sidelength3 && Sidelength1+Sidelength3>Sidelength2 && Sidelength2+Sidelength3>Sidelength1 ) //�W�h�Ga��b��c    b��c��a   c��a��b
        {
        printf("���G�G�i�H����\n"); //���G  
        }
        else
        {
        printf("���G�G���i�H����\n"); //���G  
        }
    system("pause"); //�Ȱ� 
	return 0; //�^�ǭ� 0 
}
