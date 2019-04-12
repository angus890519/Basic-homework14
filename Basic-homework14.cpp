/* 計算機概論實務-基本練習作業-作業14*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/21 10:00*/ 
#include <iostream> //定義函示庫 
//測試檔
/*
輸入：3 5 3　　輸出：可以滿足
輸入：5 2 2　　輸出：不可以滿足
輸入：7 3 4　　輸出：不可以滿足
輸入：3 7 5　　輸出：可以滿足
*/ 
int main()
{
    int Sidelength1,Sidelength2,Sidelength3; //定義三邊長 
    printf("三根木條能不能拼成一個三角形。\n");
	printf("定義：三角形的三邊長一定滿足任兩邊邊長和大於第三邊。\n");
	printf("請輸入三邊長的長度：");
	scanf("%d%d%d",&Sidelength1,&Sidelength2,&Sidelength3);//輸入三邊長 
        if( Sidelength1+Sidelength2>Sidelength3 && Sidelength1+Sidelength3>Sidelength2 && Sidelength2+Sidelength3>Sidelength1 ) //規則：a＋b＞c    b＋c＞a   c＋a＞b
        {
        printf("結果：可以滿足\n"); //結果  
        }
        else
        {
        printf("結果：不可以滿足\n"); //結果  
        }
    system("pause"); //暫停 
	return 0; //回傳值 0 
}
