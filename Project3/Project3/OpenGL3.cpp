#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include<algorithm>
#define n 3
using namespace std;
//#pragma comment(lib, "glut32.lib")    
int index;
POINT point[n];
GLfloat oldx,oldy,newx,newy;
double ratio;int flag;
struct draw{	
	GLfloat x;	
	GLfloat y;
}
get;draw Array[1200000];
draw Poi;
void init(void)
{	
	glClearColor(0.0, 0.0, 0.0, 0.0);	
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
draw reckon(draw x, draw y, double ratio)
{	
	draw ans;	
	ans.x = y.x - x.x;	
	ans.y = y.y - x.y;	
	ans.x *= ratio;
	ans.y *= ratio;	
	ans.x += x.x;	
	ans.y += x.y;	
	return ans;
}
draw compute(POINT x, POINT y, double ratio)
{	
	POINT temp;	
	temp.x = y.x - x.x;	
	temp.y = y.y - x.y;	
	draw ans;
	ans.x = (FLOAT)temp.x*1.00*ratio / 400 + (FLOAT)x.x*1.00 / 400;	
	ans.y = (FLOAT)temp.y*1.00*ratio / 400 + (FLOAT)x.y*1.00 / 400;
	return ans;
} 
void display(void)
{	
	flag = 0;	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES); 	
	for (int i = 0; i < n-1; i++)	
	{		
		if (i == n - 1)		
			flag = 1;	
		glColor3f((i*1.0+0.5)/(n*1.0), (i*0.9+0.6)/(n*1.0),1.5);
		GLfloat oldx = (FLOAT)point[i].x*1.00 / 400;	
		GLfloat oldy = (FLOAT)point[i].y*1.00 / 400;	
		GLfloat newx = (FLOAT)point[i+1].x*1.00 / 400;	
		GLfloat newy = (FLOAT)point[i+1].y*1.00 / 400;		
		glBegin(GLU_POINT);		
		glVertex2f(oldx, oldy);	
		glBegin(GLU_POINT);		
		glVertex2f(newx, newy);		
		glBegin(GL_LINES);	
		glVertex2f(oldx, oldy);		
		glVertex2f(newx, newy);	
		glEnd();	
	}	
	int cnt = 0;	
	for (double deep = 0.0;deep < abs(point[0].x-point[1].x); deep += 0.1)	
	{		
		ratio = deep / abs(point[0].x - point[1].x)*1.0;	
		Poi = reckon(compute(point[0],point[1],ratio),compute(point[1],point[2],ratio),ratio);	
		Array[cnt].x = Poi.x;	
		Array[cnt++].y = Poi.y;
	}	
	glBegin(GL_POINTS);
	for (int i = 0; i < cnt; i++)	
	{		
		glVertex2f(Array[i].x, Array[i].y);	
	} 	
	glutSwapBuffers(); 
	glEnd();	
	glFlush();
}
void motion(int x, int y)
{	
	point[index].x = x;
	point[index].y = 400 - y;
}
void mouse(int button, int state, int x, int y)
{	
	if (button == GLUT_LEFT_BUTTON)
	{		
		if (state == GLUT_DOWN)		
		{		
			glutMotionFunc(motion);		
			if (index < 3)	
			{			
				cout << point[index].x << endl;		
				cout << point[index++].y << endl;	
			} 		
		}	
	}
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutCreateWindow("I love OpenGl");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutPassiveMotionFunc(motion);
	glutIdleFunc(display);
	glutMainLoop();
	for (int i = 0; i < 100; i++)
	{
		cout << Array[i].x << endl;
		cout << Array[i].y << endl;
	}
	return 0;
}
