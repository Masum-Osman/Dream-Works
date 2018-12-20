#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
void init(void)
{
	glClearColor(0.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 50, 0, 50);
	//gluOrtho2D(0, 1000, 0, 1000);

}

void circle_(){     //aita kaj kora na
    glPushMatrix();
    glColor3f(1,1,1);
    glScalef(55,120,0);
    glutSolidSphere(1.5,5,3);
    glPopMatrix();
    glEnd();
    glutSwapBuffers();
    glFlush();

}


void circle_kon()    //aivaba kaj kora
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(25+7*cos(3.14159*i/180),35+7*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}

void eyes()
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
	glColor3f(0.50, 0.50, 0.50);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(22+1*cos(3.14159*i/180),37+1*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(0.50, 0.50, 0.50);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(28+1*cos(3.14159*i/180),37+1*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();
}

void nose()
{
    glColor3f(0.2f,0.2f,0.5f);
    glBegin(GL_TRIANGLES);
        glVertex3f(24,35,0.0);
        glVertex3f(25,34,0.0);
        glVertex3f(26,35,0.0);
    glEnd();

    glFlush();
}

void mouth()
{
    glColor3f(0.90, 0.50, 0.50);
    glBegin(GL_POLYGON);
        for(int i=180;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(25+2*cos(3.14159*i/180),32+2*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glFlush();
}

void body()
{
    glColor3f(0.2f,0.9f,0.1f);
    glBegin(GL_QUADS);
        glVertex3f(19.0,15.0,0);
        glVertex3f(30.0,15.0,0);
        glVertex3f(30.0,28.0,0);
        glVertex3f(19.0,28.0,0);
    glEnd();

    glFlush();
}

void neck()
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        for(int i=180;i<360;i++)     //360 kon
        {                                                                          //// y point=sin main point ; x point=cos main point
            glVertex2f(25+2*cos(3.14159*i/180),28+2*sin(3.14159*i/180));       //main point + radius
        }                                                                            //3.14159*i/180   convert degree to radian
        glEnd();

        glFlush();
}

void legs()
{
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(26.0,3.0,0);
        glVertex3f(28.0,3.0,0);
        glVertex3f(28.0,15.0,0);
        glVertex3f(26.0,15.0,0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(21.0,3.0,0);
        glVertex3f(23.0,3.0,0);
        glVertex3f(23.0,15.0,0);
        glVertex3f(21.0,15.0,0);
    glEnd();

    glFlush();
}


void hands()
{
     glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(10.0,25.0,0);
        glVertex3f(19.0,27.0,0);
        glVertex3f(19.0,28.0,0);
        glVertex3f(10.0,26.0,0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(30.0,27.0,0);
        glVertex3f(39.0,25.0,0);
        glVertex3f(39.0,26.0,0);
        glVertex3f(30.0,28.0,0);
    glEnd();

    glFlush();
}

void showes()
{
    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(26.0,1.0,0);
        glVertex3f(28.0,1.0,0);
        glVertex3f(28.0,3.0,0);
        glVertex3f(26.0,3.0,0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(21.0,1.0,0);
        glVertex3f(23.0,1.0,0);
        glVertex3f(23.0,3.0,0);
        glVertex3f(21.0,3.0,0);
    glEnd();

    glFlush();
}


void wrists()
{
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(9.0,25.0,0);
        glVertex3f(10.0,25.0,0);
        glVertex3f(10.0,26.0,0);
        glVertex3f(9.0,26.0,0);
    glEnd();

    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3f(39.0,25.0,0);
        glVertex3f(40.0,25.0,0);
        glVertex3f(40.0,26.0,0);
        glVertex3f(39.0,26.0,0);
    glEnd();

    glFlush();
}

void buildHouse(void)
{

    circle_kon();
    eyes();
    nose();
    mouth();
    body();
    neck();
    legs();
    showes();
    hands();
    wrists();
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
