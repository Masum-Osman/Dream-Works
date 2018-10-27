#include <windows.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(0, 500, 0, 500);
	gluOrtho2D(0, 1000, 0, 1000);

}



void circle_kon()    //aivaba kaj kora
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
	glColor3f(0.80, .90, 0.90);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(800+95*cos(3.14159*i/180),600+95*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();



	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(820+95*cos(3.14159*i/180),625+95*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}


void buildHouse(void)
{

    circle_kon();

    //circle_();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("House Section OpenGL");
	init();
	glutDisplayFunc(buildHouse);
	glutMainLoop();
}


