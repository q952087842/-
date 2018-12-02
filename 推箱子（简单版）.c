#include <stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define kRows 15
#define kCols 16
#define time 90

int m;

/* 定义变量 */
char map[kRows][kCols];
//定义变量保存位置信息
//定义小人当前位置信息
int personX;
int personY;
//小人将要移动的下一个位置信息
int personNextX;
int personNextY;
 
//定义箱子的当前的位置
int boxX;
int boxY;
 
//定义变量接收用户输入的方向
char direction;
 
//定义路的字符
char street;
char boxFlag;
/* 定义变量 */
 
void printMap(char map[kRows][kCols])
{ 
	int i=0;
    
    for ( i=0; i<kRows; i++) /*二维数组按行输出 一个I即可*/
	{
        printf("%s\n",map[i]);
    }
    
}
 
 
void move1(char map[kRows][kCols],int oldX,int oldY,int newX,int newY)
{ 
    //交换两个位置的字符
    char temp;
    temp = map[oldX][oldY];
    map[oldX][oldY] = map[newX][newY];
    map[newX][newY] = temp;
    
}
 
 
void initMap(char map[kRows][kCols]) 
{
    char tempMap[kRows][kCols]=
	{
        "###############",
        "#O ####      ##",
        "# X#          #",
        "#  #  #  ##   #",
        "#        #   ##",
        "#        #   ##",
        "########### ## ",
        "#       #    # ",
        "#            # ",
        "#   # #      # ",
        "#     ##     # ",
        "#   ########## ",
        "#            # ",
        "#            # ",
        "########## ### "};
		int i=0,j=0;
    
    for (i = 0; i < kRows; i++) 
	{
        for ( j = 0; j < kCols; j++)
		{
            map[i][j] = tempMap[i][j];
        }
    } 
    //定义变量保存位置信息
    //定义小人当前位置信息
    personX =1;
    personY =1;
    //小人将要移动的下一个位置信息
    personNextX=personX;
    personNextY=personY;
    
    //定义箱子的当前的位置
    boxX = 2;
    boxY = 2;
    
    //定义路的字符
    street =' ';
 
    boxFlag = 'X';
}
void initMap2(char map[kRows][kCols])
{
		char tempMap[kRows][kCols]=
		{
	    "###############",
        "#O ####  #   ##",
        "# X#        # #",
        "#  #  #  ##   #",
        "#        #   ##",
        "# #   #  #    #",
        "#########   ## ",
        "#    #  #    # ",
        "#          # # ",
        "# # # #    # # ",
        "# # # ## #   # ",
        "##  # ## ##### ",
        "#          ### ",
        "#####        # ",
        "########## ### "};
		
		int i=0,j=0;
    
    for (i = 0; i < kRows; i++) 
	{
        for ( j = 0; j < kCols; j++) 
		{
            map[i][j] = tempMap[i][j];
        }
    }
	//定义变量保存位置信息
    //定义小人当前位置信息
    personX =1;
    personY =1;
    //小人将要移动的下一个位置信息
    personNextX=personX;
    personNextY=personY;
    
    //定义箱子的当前的位置
    boxX = 2;
    boxY = 2;
    
    //定义路的字符
    street =' ';
    boxFlag = 'X';
}
void initMap3(char map[kRows][kCols])
{
		char tempMap[kRows][kCols]=
		{
	    "###############",
        "#O ##     #  ##",
        "# X#   #   ## #",
        "#  #          #",
        "#        # # ##",
        "# #   ##      #",
        "# # ##      # #",
        "#       #   ## ",
        "# #  #       # ",
        "#   # #    ### ",
        "# #    #  #  # ",
        "#   #  #   # # ",
        "#      ### # # ",
        "#  ##        #",
        "########## ### "};
		
		int i=0,j=0;
    
    for (i = 0; i < kRows; i++) 
	{
        for ( j = 0; j < kCols; j++)
		{
            map[i][j] = tempMap[i][j];//整体替换全局变量MAP二维数组的内容
        }
    }
	//定义变量保存位置信息
    //定义小人当前位置信息
    personX =1;
    personY =1;
    //小人将要移动的下一个位置信息
    personNextX=personX;
    personNextY=personY;
    
    //定义箱子的当前的位置
    boxX = 2;
    boxY = 2;
    
    //定义路的字符
    street =' ';
 
    boxFlag = 'X';
}
void initMap4(char map[kRows][kCols])
{
		char tempMap[kRows][kCols]=
		{
	    "###############",
        "#O ##   ###   #",
        "# X#   #    # #",
        "#  #       #  #",
        "#        # # ##",
        "# #  ###  ## ##",
        "# # ##        #",
        "#  #  ###  ### ",
        "# #          # ",
        "# # # #  # ### ",
        "# #    #  #### ",
        "#   #  ##  # # ",
        "# #    ### # # ",
        "#  ##        #",
        "########## ### "};
		
		int i=0,j=0;
    
    for (i = 0; i < kRows; i++) 
	{
        for ( j = 0; j < kCols; j++) 
		{
            map[i][j] = tempMap[i][j];
        }
    }
	//定义变量保存位置信息
    //定义小人当前位置信息
    personX =1;
    personY =1;
    //小人将要移动的下一个位置信息
    personNextX=personX;
    personNextY=personY;
    
    //定义箱子的当前的位置
    boxX = 2;
    boxY = 2;
    
    //定义路的字符
    street =' ';
 
    boxFlag = 'X';
}
 
	
		
 
 
void restart() 
{
    //******** 初始化地图 **********
    initMap(map);
    
    //*******  打印地图 **********
 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//颜色
		printf("*****先来个最简单的试试手*****\n");
    printf("请控制小人移动：\nO.小人 X.箱子\nw.上  s.下  a.左  d.右 r.重新开始 q.退出 \n回车键确认\n");
 
}
void restart2()
 {
    //******** 初始化地图 **********
    initMap2(map);
    
    //*******  打印地图 **********
    
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//颜色
		printf("*****先来个最简单的试试手*****\n");
    printf("请控制小人移动：\nO.小人 X.箱子\nw.上  s.下  a.左  d.右 r.重新开始 q.退出 \n回车键确认\n");
 
}
void restart3()
 {
    //******** 初始化地图 **********
    initMap3(map);
    
    //*******  打印地图 **********
    
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//颜色
		printf("*****先来个最简单的试试手*****\n");
    printf("请控制小人移动：\nO.小人 X.箱子\nw.上  s.下  a.左  d.右 r.重新开始 q.退出 \n回车键确认\n");
 
}
void restart4()
 {
    //******** 初始化地图 **********
	
    initMap4(map);
    
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//颜色
		printf("*****先来个最简单的试试手*****\n");
    printf("请控制小人移动：\nO.小人 X.箱子\nw.上  s.下  a.左  d.右 r.重新开始 q.退出 \n回车键确认\n");
 
}
void judge()
{     //5、根据用户输入的方向 判断如何移动
        if (map[personNextX][personNextY] == street)
		{
            //        先判断小人的下一个位置是否 是路
            
            //        如果是路，先让小人移动
            //移动
            //让小人和路进行交换
            move1(map,personX,personY,personNextX,personNextY);
            
            //重新调整小人的位置
            personX = personNextX;
            personY = personNextY;
            
        }
		else if (map[personNextX][personNextY] == boxFlag){
            
            //        如果不是路，
            
            //              再次判断是否是箱子
            //              如果是箱子，计算箱子的下一个位置
            
            int boxNextX = boxX+(boxX-personX);
            int boxNextY = boxY+(boxY-personY);
            
            //                 再次判断箱子的下一个位置是否是路
            if (map[boxNextX][boxNextY] == street) {
                
                //                 如果箱子的下一个位置是路，要移动小人和箱子
                //                        如何移动小人和箱子呢?
                //                        1)移动箱子到箱子的下一个位置
                move1(map, boxX, boxY, boxNextX, boxNextY);
                //                        2)让小人移动到箱子的原来的位置
                move1(map, personX, personY, boxX, boxY);
                
                //重新调整 箱子的位置和小人的位置
                personX = personNextX;
                personY = personNextY;
                
                boxX = boxNextX;
                boxY = boxNextY;
                
            }
            //              如果不是箱子，什么也不干
        }}
 
int main() 
{
   
    restart();
 
    
mark: while (1)
	  { _sleep(500);
        
        //3、接收用户输入的方向
        //rewind(stdin);
        scanf("%c",&direction);
        //获取一个字符从键盘
        //判断方向
        switch (direction) {
            case 'w':
            case 'W':
                //下一个位置-1
                personNextX--;
                break;
            case 's':
            case 'S':
                personNextX++;
                break;
            case 'a':
            case 'A':
                personNextY--;
                break;
            case 'd':
            case 'D':
                personNextY++;
                break;
            case 'r':
            case 'R':
			{
                printf("程序已经重新开始\n");
				if(m!=1&&m!=2&&m!=3){
					restart();}
				if(m==1)
				{restart2();}
				if(m==2)
				{restart3();}
				if(m==3)
				{restart4();}
            }
                break;
			case'g':
			case'G':
				boxX=kCols-2;
				break;
 
            case 'q':
            case 'Q':
                
                printf("程序正在退出...\n");
                printf("程序已经退出!\n");
                return 0;
                
            default:
                break;
        }
        
      judge();
        system("cls");
        
        //******   重绘地图 ***********
        // 6、重绘地图
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_RED );
        printMap(map);//运行一次打印一次
        //*******  判断是否走出来 ******
        // 7、判断箱子是否被推出来了
        if (boxX==kCols-2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
 
            printf("6666666666!\n");//通关提示
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE |FOREGROUND_INTENSITY );
			printf("*******来吧勇士 选哪一关！********\n");
			printf("1代表普通难度\n");
			printf("2困难难度\n");
			printf("3通关？不存在的\n");
			scanf("%d",&m);
			if(m==1){
			initMap2(map);
				printMap(map);
				goto mark;	
			}
		 if(m==2){
			initMap3(map);
		    	printMap(map);
			goto mark;
			}
		 if(m==3){
			 initMap4(map);
		 printMap(map);
		 goto mark;
		 }
	 
			break;
		}
 
		}
 
 
    
    return 0;
 
}
