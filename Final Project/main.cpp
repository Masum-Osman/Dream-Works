#include <windows.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
	glClearColor(0.1, 0.1, 0.2, 0.0);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(0, 500, 0, 500);
	gluOrtho2D(0, 1500, 0, 900);

}



void circle_kon()    //aivaba kaj kora
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
	glColor3f(0.80, .90, 0.90);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(1200+120*cos(3.14159*i/180),630+120*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();



	glColor3f(0.1, 0.1, 0.2);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(1220+120*cos(3.14159*i/180),655+120*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}


void tallHouseUnderMoon()
{
    glColor3f(0.0f,1.0f,1.0f);

    glBegin(GL_POLYGON);
        glVertex3d(995.0,370.0,0.0);
        glVertex3d(990.0,0.0,0.0);
        glVertex3d(1160.0,0.0,0.0);
        glVertex3d(1150.0,370.0,0.0);
        glVertex3d(1155.0,378.0,0.0);
        glVertex3d(1070.0,420.0,0.0);
        glVertex3d(985.0,378.0,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_LINES);
        glVertex3d(1070.0,420.0,0.0);
        glVertex3d(1070.0,500.0,0.0);
    glEnd();

    glFlush();
}

void buildHouse(void)
{

    circle_kon();
    tallHouseUnderMoon();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1000, 600);
	glutCreateWindow("House Section OpenGL");
	init();
	glutDisplayFunc(buildHouse);
	glutMainLoop();
}


