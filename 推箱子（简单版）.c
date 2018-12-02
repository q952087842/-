#include <stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define kRows 15
#define kCols 16
#define time 90

int m;

/* ������� */
char map[kRows][kCols];
//�����������λ����Ϣ
//����С�˵�ǰλ����Ϣ
int personX;
int personY;
//С�˽�Ҫ�ƶ�����һ��λ����Ϣ
int personNextX;
int personNextY;
 
//�������ӵĵ�ǰ��λ��
int boxX;
int boxY;
 
//������������û�����ķ���
char direction;
 
//����·���ַ�
char street;
char boxFlag;
/* ������� */
 
void printMap(char map[kRows][kCols])
{ 
	int i=0;
    
    for ( i=0; i<kRows; i++) /*��ά���鰴����� һ��I����*/
	{
        printf("%s\n",map[i]);
    }
    
}
 
 
void move1(char map[kRows][kCols],int oldX,int oldY,int newX,int newY)
{ 
    //��������λ�õ��ַ�
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
    //�����������λ����Ϣ
    //����С�˵�ǰλ����Ϣ
    personX =1;
    personY =1;
    //С�˽�Ҫ�ƶ�����һ��λ����Ϣ
    personNextX=personX;
    personNextY=personY;
    
    //�������ӵĵ�ǰ��λ��
    boxX = 2;
    boxY = 2;
    
    //����·���ַ�
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
	//�����������λ����Ϣ
    //����С�˵�ǰλ����Ϣ
    personX =1;
    personY =1;
    //С�˽�Ҫ�ƶ�����һ��λ����Ϣ
    personNextX=personX;
    personNextY=personY;
    
    //�������ӵĵ�ǰ��λ��
    boxX = 2;
    boxY = 2;
    
    //����·���ַ�
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
            map[i][j] = tempMap[i][j];//�����滻ȫ�ֱ���MAP��ά���������
        }
    }
	//�����������λ����Ϣ
    //����С�˵�ǰλ����Ϣ
    personX =1;
    personY =1;
    //С�˽�Ҫ�ƶ�����һ��λ����Ϣ
    personNextX=personX;
    personNextY=personY;
    
    //�������ӵĵ�ǰ��λ��
    boxX = 2;
    boxY = 2;
    
    //����·���ַ�
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
	//�����������λ����Ϣ
    //����С�˵�ǰλ����Ϣ
    personX =1;
    personY =1;
    //С�˽�Ҫ�ƶ�����һ��λ����Ϣ
    personNextX=personX;
    personNextY=personY;
    
    //�������ӵĵ�ǰ��λ��
    boxX = 2;
    boxY = 2;
    
    //����·���ַ�
    street =' ';
 
    boxFlag = 'X';
}
 
	
		
 
 
void restart() 
{
    //******** ��ʼ����ͼ **********
    initMap(map);
    
    //*******  ��ӡ��ͼ **********
 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//��ɫ
		printf("*****��������򵥵�������*****\n");
    printf("�����С���ƶ���\nO.С�� X.����\nw.��  s.��  a.��  d.�� r.���¿�ʼ q.�˳� \n�س���ȷ��\n");
 
}
void restart2()
 {
    //******** ��ʼ����ͼ **********
    initMap2(map);
    
    //*******  ��ӡ��ͼ **********
    
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//��ɫ
		printf("*****��������򵥵�������*****\n");
    printf("�����С���ƶ���\nO.С�� X.����\nw.��  s.��  a.��  d.�� r.���¿�ʼ q.�˳� \n�س���ȷ��\n");
 
}
void restart3()
 {
    //******** ��ʼ����ͼ **********
    initMap3(map);
    
    //*******  ��ӡ��ͼ **********
    
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//��ɫ
		printf("*****��������򵥵�������*****\n");
    printf("�����С���ƶ���\nO.С�� X.����\nw.��  s.��  a.��  d.�� r.���¿�ʼ q.�˳� \n�س���ȷ��\n");
 
}
void restart4()
 {
    //******** ��ʼ����ͼ **********
	
    initMap4(map);
    
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED);//��ɫ
		printf("*****��������򵥵�������*****\n");
    printf("�����С���ƶ���\nO.С�� X.����\nw.��  s.��  a.��  d.�� r.���¿�ʼ q.�˳� \n�س���ȷ��\n");
 
}
void judge()
{     //5�������û�����ķ��� �ж�����ƶ�
        if (map[personNextX][personNextY] == street)
		{
            //        ���ж�С�˵���һ��λ���Ƿ� ��·
            
            //        �����·������С���ƶ�
            //�ƶ�
            //��С�˺�·���н���
            move1(map,personX,personY,personNextX,personNextY);
            
            //���µ���С�˵�λ��
            personX = personNextX;
            personY = personNextY;
            
        }
		else if (map[personNextX][personNextY] == boxFlag){
            
            //        �������·��
            
            //              �ٴ��ж��Ƿ�������
            //              ��������ӣ��������ӵ���һ��λ��
            
            int boxNextX = boxX+(boxX-personX);
            int boxNextY = boxY+(boxY-personY);
            
            //                 �ٴ��ж����ӵ���һ��λ���Ƿ���·
            if (map[boxNextX][boxNextY] == street) {
                
                //                 ������ӵ���һ��λ����·��Ҫ�ƶ�С�˺�����
                //                        ����ƶ�С�˺�������?
                //                        1)�ƶ����ӵ����ӵ���һ��λ��
                move1(map, boxX, boxY, boxNextX, boxNextY);
                //                        2)��С���ƶ������ӵ�ԭ����λ��
                move1(map, personX, personY, boxX, boxY);
                
                //���µ��� ���ӵ�λ�ú�С�˵�λ��
                personX = personNextX;
                personY = personNextY;
                
                boxX = boxNextX;
                boxY = boxNextY;
                
            }
            //              ����������ӣ�ʲôҲ����
        }}
 
int main() 
{
   
    restart();
 
    
mark: while (1)
	  { _sleep(500);
        
        //3�������û�����ķ���
        //rewind(stdin);
        scanf("%c",&direction);
        //��ȡһ���ַ��Ӽ���
        //�жϷ���
        switch (direction) {
            case 'w':
            case 'W':
                //��һ��λ��-1
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
                printf("�����Ѿ����¿�ʼ\n");
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
                
                printf("���������˳�...\n");
                printf("�����Ѿ��˳�!\n");
                return 0;
                
            default:
                break;
        }
        
      judge();
        system("cls");
        
        //******   �ػ��ͼ ***********
        // 6���ػ��ͼ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_GREEN|FOREGROUND_RED );
        printMap(map);//����һ�δ�ӡһ��
        //*******  �ж��Ƿ��߳��� ******
        // 7���ж������Ƿ��Ƴ�����
        if (boxX==kCols-2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
 
            printf("6666666666!\n");//ͨ����ʾ
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE |FOREGROUND_INTENSITY );
			printf("*******������ʿ ѡ��һ�أ�********\n");
			printf("1������ͨ�Ѷ�\n");
			printf("2�����Ѷ�\n");
			printf("3ͨ�أ������ڵ�\n");
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
