
//#include <GL/glut.h>
//#include <fstream>
//
//typedef float Color[3];
//
////获取像素点的颜色
//void getpixel(GLint x, GLint y, Color color) {
//    glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, color);
//}
//
////画点函数
//void setpixel(GLint x, GLint y) {
//    glBegin(GL_POINTS);
//    glVertex2f(x, y);
//    glEnd();
//}
//
////比较颜色是否相等
//int compareColor(Color color1, Color color2) {
//    if (color1[0] != color2[0] || color1[1] != color2[1] || color1[2] != color2[2]) { return 0; }
//    else { return 1; }
//}
//
//void boundaryFill4(int x, int y, Color fillColor, Color boarderColor) {
//    Color interiorColor;
//    getpixel(x, y, interiorColor);
//    if (compareColor(interiorColor, fillColor) == 0 && compareColor(interiorColor, boarderColor) == 0) {
//        setpixel(x, y);
//        boundaryFill4(x + 1, y, fillColor, boarderColor);
//        boundaryFill4(x - 1, y, fillColor, boarderColor);
//        boundaryFill4(x, y + 1, fillColor, boarderColor);
//        boundaryFill4(x, y - 1, fillColor, boarderColor);
//    }
//
//}
//
//void boundaryFill8(int x, int  y, Color fillColor, Color boarderColor) {
//    Color interiorColor, a, b, c, d;
//    getpixel(x, y, interiorColor);
//    getpixel(x + 1, y - 1, a);
//    getpixel(x, y - 1, b);
//    getpixel(x, y + 1, c);
//    getpixel(x - 1, y, d);
//    int i = 0;
//    if (compareColor(a, boarderColor) == 1) i++;
//    if (compareColor(b, boarderColor) == 1) i++;
//    if (compareColor(c, boarderColor) == 1) i++;
//    if (compareColor(d, boarderColor) == 1) i++;
//    if (i <= 1) {
//        if (compareColor(interiorColor, fillColor) == 0 && compareColor(interiorColor, boarderColor) == 0) {
//            setpixel(x, y);
//            boundaryFill8(x + 1, y, fillColor, boarderColor);
//            boundaryFill8(x, y - 1, fillColor, boarderColor);
//            boundaryFill8(x - 1, y, fillColor, boarderColor);
//            boundaryFill8(x, y + 1, fillColor, boarderColor);
//            boundaryFill8(x + 1, y - 1, fillColor, boarderColor);
//            boundaryFill8(x - 1, y - 1, fillColor, boarderColor);
//            boundaryFill8(x - 1, y + 1, fillColor, boarderColor);
//            boundaryFill8(x + 1, y + 1, fillColor, boarderColor);
//
//        }
//    }
//
//}
//
//void polygon() {
//    glBegin(GL_LINE_LOOP);
//    glLineWidth(5);
//    //此处修改坐标，绘制多边形
//    glVertex2f(100, 100);
//    glVertex2f(100, 200);
//    //glVertex2f(200, 200);
//    glVertex2f(200, 100);
//    glEnd();
//}
//
//void display(void) {
//    Color fillColor = {0.0, 1.0, 1.0};//填充颜色 蓝色
//    Color boarderColor = {0.0, 1.0, 0.0};//边界颜色 绿色
//    glClear(GL_COLOR_BUFFER_BIT);
//    glViewport(0, 0, 500, 500);
//    glColor3fv(boarderColor);
//    polygon();
//    glColor3fv(fillColor);
//    //boundaryFill4(150, 150, fillColor, boarderColor);//设置起点坐标及颜色
//    boundaryFill8(110, 110, fillColor, boarderColor);
//    glFlush();
//}
//
//int main(int argc, char **argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RED);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("BoundaryFill1");
//
//    glClearColor(1, 1, 1, 0.0);
//   glMatrixMode(GL_PROJECTION);//投影模型
//    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
//
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//
//}
//#include <GL/glut.h>
//#include <windows.h>
//const int POINTNUM = 10;      //多边形点数.
//
///******定义结构体用于活性边表AET和新边表NET***********************************/
//typedef struct XET
//{
//	float x;
//	float dx, ymax;
//	XET* next;
//}AET, NET;
//
///******定义点结构体point******************************************************/
//struct point
//{
//	float x;
//	float y;
//}
//polypoint[POINTNUM] = { 250,50,550,150,550,400,250,250,100,350,100,100,120,30 };//多边形顶点
//
//void PolyScan()
//{
//	/******计算最高点的y坐标(扫描到此结束)****************************************/
//	int MaxY = 0;
//	int i;
//	for (i = 0; i < POINTNUM; i++)
//		if (polypoint[i].y > MaxY)
//			MaxY = polypoint[i].y;
//
//	/*******初始化AET表***********************************************************/
//	AET *pAET = new AET;
//	pAET->next = NULL;
//
//	/******初始化NET表************************************************************/
//	NET *pNET[1024];
//	for (i = 0; i <= MaxY; i++)
//	{
//		pNET[i] = new NET;
//		pNET[i]->next = NULL;
//	}
//	glClear(GL_COLOR_BUFFER_BIT);        //赋值的窗体显示.  
//	glColor3f(0.0, 0.0, 0.0);             //设置直线的颜色红色
//	glBegin(GL_POINTS);
//	/******扫描并建立NET表*********************************************************/
//	for (i = 0; i <= MaxY; i++)
//	{
//		for (int j = 0; j < POINTNUM; j++)
//			if (polypoint[j].y == i)
//			{  //一个点跟前面的一个点形成一条线段。跟后面的点也形成线段   
//				Sleep(10);
//				if (polypoint[(j - 1 + POINTNUM) % POINTNUM].y > polypoint[j].y)
//				{
//					NET *p = new NET;
//					p->x = polypoint[j].x;
//					p->ymax = polypoint[(j - 1 + POINTNUM) % POINTNUM].y;
//					p->dx = (polypoint[(j - 1 + POINTNUM) % POINTNUM].x - polypoint[j].x) / (polypoint[(j - 1 + POINTNUM) % POINTNUM].y - polypoint[j].y);
//					p->next = pNET[i]->next;
//					pNET[i]->next = p;
//
//				}
//				if (polypoint[(j + 1 + POINTNUM) % POINTNUM].y > polypoint[j].y)
//				{
//					NET *p = new NET;
//					p->x = polypoint[j].x;
//					p->ymax = polypoint[(j + 1 + POINTNUM) % POINTNUM].y;
//					p->dx = (polypoint[(j + 1 + POINTNUM) % POINTNUM].x - polypoint[j].x) / (polypoint[(j + 1 + POINTNUM) % POINTNUM].y - polypoint[j].y);
//					p->next = pNET[i]->next;
//					pNET[i]->next = p;
//				}
//			}
//	}
//	/******建立并更新活性边表AET*****************************************************/
//	for (i = 0; i <= MaxY; i++)
//	{
//		//计算新的交点x,更新AET
//		NET *p = pAET->next;
//		while (p)
//		{
//			//Sleep(10);
//			p->x = p->x + p->dx;
//			p = p->next;
//		}
//		//更新后新AET先排序*************************************************************/
//		   //断表排序,不再开辟空间
//		AET *tq = pAET;
//		p = pAET->next;
//		tq->next = NULL;
//		while (p)
//		{
//			while (tq->next && p->x >= tq->next->x)
//			{
//				tq = tq->next;
//				//Sleep(10);
//			}
//				
//			NET *s = p->next;
//			p->next = tq->next;
//			tq->next = p;
//			p = s;
//			tq = pAET;
//		}
//		//(改进算法)先从AET表中删除ymax==i的结点****************************************/
//		AET *q = pAET;
//		p = q->next;
//		while (p)
//		{
//			/*Sleep(10);*/
//			if (p->ymax == i)
//			{
//				q->next = p->next;
//				delete p;
//				p = q->next;
//			}
//			else
//			{
//				q = q->next;
//				p = q->next;
//			}
//		}
//		//将NET中的新点增加AET,并用插入法按X值递增排序**********************************/
//		p = pNET[i]->next;
//		q = pAET;
//		while (p)
//		{
//			while (q->next && p->x >= q->next->x)
//				q = q->next;
//			NET *s = p->next;
//			p->next = q->next;
//			q->next = p;
//			p = s;
//			q = pAET;
//			//Sleep(1);
//		}
//		/******配对填充颜色***************************************************************/
//
//		p = pAET->next;
//		while (p && p->next)
//		{
//			for (float j = p->x; j <= p->next->x; j++) {
//				glVertex2i(static_cast<int>(j), i);
//				//Sleep(1);
//			}
//			p = p->next->next;//考虑端点情况
//			//Sleep(1);
//		}
//
//		//Sleep(10);
//	}
//	glEnd();
//	glFlush();
//}
//void init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	//窗体的背景颜色设置为白色
//	glMatrixMode(GL_PROJECTION);
//	gluOrtho2D(0.0, 600.0, 0.0, 450.0);
//}
//
//void main(int argc, char* argv)
//{
//	glutInit(&argc, &argv);                //I初始化 GLUT.
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);    //设置显示模式：单个缓存和使用RGB模型
//	glutInitWindowPosition(50, 100);        //设置窗体的顶部和左边位置
//	glutInitWindowSize(400, 300);        //设置窗体的高度和宽度
//	glutCreateWindow("An Example OpenGL Program");    //创建显示窗体
//
//	init();                                //调用初始化过程
//	glutDisplayFunc(PolyScan);        //图形的定义传递给我window.
//	glutMainLoop();                        //所有的图形和等待
//}
#include <cmath>
#include <stack>
#include <gl/glut.h>
#include <iostream>
using namespace std;

#define PI 3.14

struct Pos
{
	int x;
	int y;
	Pos(int mx, int my) :x(mx), y(my) {};
	Pos() :x(0), y(0) {};
};

stack<Pos> s;
int a[24][24] = { 0 };

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);//设置投影矩阵
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);//二维视景区域
	glPointSize(12.0f);
}
// 画棋子
void Drawtri(int x, int y, int color)
{
	double n = 200;//分段数
	float R = 10;//半径
	int i;
	if (color == 1)
	{
		glColor3f(1.0, 0.0, 0.0);
	}
	else if (color == 2)
	{
		glColor3f(0.0, 1.0, 0.0);
	}
	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	for (i = 0; i <= n; i++)
		glVertex2f(R*cos(2 * PI / n * i) + x, R*sin(2 * PI / n * i) + y);
	glEnd();
	glPopMatrix();
}

// 绘制格线
void playMap()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	for (int i = 0; i < 600; i += 25)
	{
		glVertex2f(i, 0);
		glVertex2f(i, 600);
	}
	for (int j = 0; j < 600; j += 25)
	{
		glVertex2f(0, j);
		glVertex2f(600, j);
	}
	glEnd();
	for (int k = 0; k < 24; k++)
	{
		for (int l = 0; l < 24; l++)
		{
			if (a[k][l] == 1)
			{
				Drawtri(k * 25 + 12, l * 25 + 12, 1);
			}
			else if (a[k][l] == 2)
			{
				Drawtri(k * 25 + 12, l * 25 + 12, 2);
			}
		}
	}
}

// 简单深度搜索填充 （四连通）
void DfsFill(int x, int y)
{
	if (x < 0 || y < 0 || x>23 || y>23)
	{
		return;
	}
	if (a[x][y] == 0)
	{
		a[x][y] = 2;
		DfsFill(x - 1, y);
		DfsFill(x + 1, y);
		DfsFill(x, y - 1);
		DfsFill(x, y + 1);
	}
}

// 扫描线种子填充算法（四连通）
void ScanFill(int x, int y)
{
	if (a[x][y] != 0)
	{
		return;
	}
	Pos first(x, y);
	s.push(first);
	while (!s.empty())
	{
		int rightX = 0;
		int leftX = 0;
		Pos cur = s.top();
		s.pop();
		a[cur.x][cur.y] = 2;
		// 遍历当前行
		for (int i = 1; i < 24; i++)
		{
			if (cur.x + i < 24)
			{
				if (a[cur.x + i][cur.y] == 0)
					a[cur.x + i][cur.y] = 2;
				else
				{
					rightX = cur.x + i - 1;
					break;
				}
			}
			if (i == 23)
			{
				rightX = 23;
			}
		}
		for (int i = 1; i < 24; i++)
		{
			if (cur.x - i > -1)
			{
				if (a[cur.x - i][cur.y] == 0)
					a[cur.x - i][cur.y] = 2;
				else
				{
					leftX = cur.x - i + 1;
					break;
				}
			}
			if (i == 0)
			{
				leftX = 0;
			}
		}

		cout << leftX << "," << rightX << endl;

		// 判断上行
		int upRightX = -1;
		for (int i = leftX; i <= rightX; i++)
		{
			if (a[i][cur.y + 1] == 0 && cur.y + 1 < 24)
			{
				upRightX = i;
			}
		}
		if (upRightX != -1)
		{
			Pos temPos(upRightX, cur.y + 1);
			s.push(temPos);
		}

		// 判断下行
		int downRightX = -1;
		for (int i = leftX; i <= rightX; i++)
		{
			if (a[i][cur.y - 1] == 0 && cur.y - 1 >= 0)
			{
				downRightX = i;
			}
		}
		if (downRightX != -1)
		{
			Pos temPos(downRightX, cur.y - 1);
			s.push(temPos);
		}

	}
}

void displayFcn(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	playMap();
	glFlush();
}


void mouse(GLint button, GLint action, GLint x, GLint y)
{
	int curX, curY;
	if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	{
		curX = x / 25;
		curY = (600 - y) / 25;
		a[curX][curY] = 1;
		glutPostRedisplay();//重绘窗口
	}
	if (button == GLUT_RIGHT_BUTTON && action == GLUT_DOWN)
	{
		curX = x / 25;
		curY = (600 - y) / 25;
		ScanFill(curX, curY);

		glutPostRedisplay();//重绘窗口
	}
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(300, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("mouse");

	init();
	glutDisplayFunc(displayFcn);

	glutMouseFunc(mouse);

	glutMainLoop();
}