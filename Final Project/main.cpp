#include <windows.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>

static float	tx	=  0.0;
static float	ty	=  0.0;

void init(void)
{
	glClearColor(0.1, 0.1, 0.2, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 1500, 0, 900);
	PlaySound("James Bond.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void walkingMan(void)
{
    glColor3f(0, 1, 1.0);        // Set foreground color & has 3 attribute with range (0-1) or (0f-1f)
	glBegin(GL_QUADS);  //start square
	glVertex2i(tx+360, ty+404);
	glVertex2i(tx+370, ty+404);
	glVertex2i(tx+370, ty+430);
	glVertex2i(tx+360, ty+430);
	glEnd();   //end square

    glFlush();

	glutSwapBuffers();
			tx++;
			Sleep(50);
			if(tx==680)
            {
                tx	=  0.0;
            }
    glutPostRedisplay();

}

void circle_kon()    //moon
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
	glColor3f(0.95f,0.9f,0.7f);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {
            glVertex2f(1200+120*cos(3.14159*i/180),630+120*sin(3.14159*i/180));
        }
        glEnd();



	glColor3f(0.1, 0.1, 0.2);
    glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)     //360 kon
        {
            glVertex2f(1220+120*cos(3.14159*i/180),655+120*sin(3.14159*i/180));
        }
        glEnd();

    glFlush();

}


void insidetallHouseUnderMoon()
{
    //first line
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(987.0,376.0,0.0);
        glVertex3d(1066.0,415.0,0.0);
    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(1066.0,415.0,0.0);
        glVertex3d(1153.0,376.0,0.0);
    glEnd();

    //second line
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(995.0,370,0.0);
    //color
    glColor3f(0.3f,0.3f,0.46f);
        glVertex3d(1070.0,403.0,0.0);
    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(1070.0,403.0,0.0);
        glVertex3d(1150.0,370.0,0.0);
    glEnd();

    //vertical inside lines 1
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(1080.0,400.0,0.0);
        glVertex3d(1088.0,0.0,0.0);
    glEnd();
    //vertical inside lines 2
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(1060.0,400.0,0.0);
        glVertex3d(1056.0,0.0,0.0);
    glEnd();

    glFlush();
}


void tallHouseUnderMoon()
{
    //original color code glColor3f(0.78f,0.91f,0.79f);

    glBegin(GL_POLYGON);
    glColor3f(0.9f,0.9f,0.7f);
        glVertex3d(995.0,370.0,0.0);
    glColor3f(0.0f,0.61f,0.5f);
        glVertex3d(985.0,0.0,0.0);
        glVertex3d(1165.0,0.0,0.0);

    glColor3f(0.9f,0.9f,0.7f);
        glVertex3d(1150.0,370.0,0.0);
        glVertex3d(1155.0,378.0,0.0);
    glColor3f(0.0f,0.61f,0.5f);
        glVertex3d(1070.0,420.0,0.0);
        glVertex3d(985.0,378.0,0.0);

    glEnd();

    //tower
    glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_LINES);
        glVertex3d(1070.0,420.0,0.0);
        glVertex3d(1070.0,480.0,0.0);
    glEnd();


    glFlush();
}


void secondMainTallHouse()
{
    //buildings left side
    glColor3f(0.3f,0.3f,0.46f);
    glBegin(GL_POLYGON);
        glVertex3d(185.0,0.0,0.0);
        glVertex3d(270.0,0.0,0.0);
    glColor3f(0.5f,0.61f,0.5f);
        glVertex3d(260.0,370.0,0.0);
        glVertex3d(195.0,340.0,0.0);
    glEnd();

    //buildings right side
    glColor3f(0.3f,0.3f,0.46f);
    glBegin(GL_POLYGON);
        glVertex3d(270.0,0.0,0.0);

    glColor3f(0.6f,0.6f,0.6f);
        glVertex3d(400.0,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
        glVertex3d(380.0,355.0,0.0);
        glVertex3d(260.0,370.0,0.0);
    glEnd();

    //left side roof
    glColor3f(0.5f,0.61f,0.5f);
    glBegin(GL_POLYGON);
        glVertex3d(210.0,330.0,0.0);
        glVertex3d(260.0,370.0,0.0);
    glColor3f(0.5f,0.61f,0.5f);
        glVertex3d(260.0,410.0,0.0);
        glVertex3d(210.0,385.0,0.0);
    glEnd();


    //right side roof

    glBegin(GL_POLYGON);
    glColor3f(0.68f,0.79f,0.96f);
        glVertex3d(260.0,370.0,0.0);

    glColor3f(0.9f,0.9f,0.7f);
        glVertex3d(360.0,355.0,0.0);

    glColor3f(0.9f,0.9f,0.7f);
        glVertex3d(360.0,405.0,0.0);
        glVertex3d(260.0,410.0,0.0);
    glEnd();

    //middle line of down building
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(260.0,350,0.0);
        glVertex3d(270.0,0.0,0.0);
    glEnd();


    //middle line of up building
    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(262.0,360.0,0.0);
        glVertex3d(260.0,410.0,0.0);
    glEnd();


    glFlush();
}


void thirdleftbuilding()
{
    //whole first building

    glBegin(GL_POLYGON);
    glColor3f(0.6f,0.6f,0.6f);
        glVertex3d(76.0,0.0,0.0);
        glVertex3d(185.0,0.0,0.0);

    glColor3f(0.3f,0.3f,0.6f);
        glVertex3d(188.0,90.0,0.0);
        glVertex3d(100.0,90.0,0.0);
        glVertex3d(80.0,80.0,0.0);
     //glColor3f(0.5f,0.5f,0.5f);



    glEnd();


    //line of the building
    glColor3f(0.0f,0.0f,1.0f);
     glBegin(GL_LINES);
        glVertex3d(100.0,0.0,0.0);
        glVertex3d(100.0,90.0,0.0);
    glEnd();


    glFlush();
}


void lampPosts()
{
    //first
    glColor3f(0.4f,0.4f,0.4f);
    glBegin(GL_POLYGON);
        glVertex3d(1180.0,0.0,0.0);
        glVertex3d(1185.0,0.0,0.0);
        glVertex3d(1185.0,60.0,0.0);
        glVertex3d(1180.0,60.0,0.0);
    glEnd();


    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        glVertex3d(1183.0,60.0,0.0);
        glVertex3d(1195.0,60.0,0.0);
        glVertex3d(1195.0,65.0,0.0);
        glVertex3d(1183.0,65.0,0.0);
    glEnd();

    //second
    glColor3f(0.4f,0.4f,0.4f);
    glBegin(GL_POLYGON);
        glVertex3d(780.0,0.0,0.0);
        glVertex3d(785.0,0.0,0.0);
        glVertex3d(785.0,60.0,0.0);
        glVertex3d(780.0,60.0,0.0);
    glEnd();


    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        glVertex3d(783.0,60.0,0.0);
        glVertex3d(795.0,60.0,0.0);
        glVertex3d(795.0,65.0,0.0);
        glVertex3d(783.0,65.0,0.0);
    glEnd();

    //third
    glColor3f(0.4f,0.4f,0.4f);
    glBegin(GL_POLYGON);
        glVertex3d(380.0,0.0,0.0);
        glVertex3d(385.0,0.0,0.0);
        glVertex3d(385.0,60.0,0.0);
        glVertex3d(380.0,60.0,0.0);
    glEnd();


    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        glVertex3d(383.0,60.0,0.0);
        glVertex3d(395.0,60.0,0.0);
        glVertex3d(395.0,65.0,0.0);
        glVertex3d(383.0,65.0,0.0);
    glEnd();

    //fourth
    glColor3f(0.4f,0.4f,0.4f);
    glBegin(GL_POLYGON);
        glVertex3d(010.0,0.0,0.0);
        glVertex3d(15.0,0.0,0.0);
        glVertex3d(15.0,60.0,0.0);
        glVertex3d(10.0,60.0,0.0);
    glEnd();


    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        glVertex3d(13.0,60.0,0.0);
        glVertex3d(25.0,60.0,0.0);
        glVertex3d(25.0,65.0,0.0);
        glVertex3d(13.0,65.0,0.0);
    glEnd();

    glFlush();
}


void mainLine(void)
{

    //middle line connecting two buildings
    glColor3f(1.0f,1.0f,1.0f);
     glBegin(GL_LINES);
        glVertex3d(357.0,404.0,0.0);
        glVertex3d(1043.0,404.0,0.0);
    glEnd();

    glFlush();
}


void lastBuilding()
{
    glBegin(GL_POLYGON);
    glColor3f(0.19f,0.29f,0.19f);
        glVertex3d(425.0,0.0,0.0);
        glVertex3d(550.0,0.0,0.0);
    glColor3f(1.0f,1.0f,1.0f);
        glVertex3d(540.0,200.0,0.0);

    glColor3f(0.39f,0.79f,0.5f);
        glVertex3d(460.0,210.0,0.0);
        glVertex3d(428.0,200.0,0.0);
    glEnd();


    glColor3f(0.0f,0.0f,0.0f);
     glBegin(GL_LINES);
        glVertex3d(460.0,210.0,0.0);
        glVertex3d(460.0,0.0,0.0);
    glEnd();

    glFlush();
}


/*
void colorCheck()
{
    glBegin(GL_POLYGON);
    glColor3f(0.68f,0.79f,0.96f);
        glVertex3d(76.0,0.0,0.0);
        glVertex3d(185.0,0.0,0.0);
        glVertex3d(188.0,90.0,0.0);
        glVertex3d(100.0,90.0,0.0);
        glVertex3d(80.0,80.0,0.0);
    glEnd();

    glFlush();
}
*/

void buildHouse(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    circle_kon();
    tallHouseUnderMoon();
    insidetallHouseUnderMoon();
    secondMainTallHouse();
    thirdleftbuilding();
    lampPosts();
    mainLine();
    lastBuilding();
    walkingMan();

    //colorCheck();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1000, 600);
	glutCreateWindow("House Section OpenGL");
	init();
	glutDisplayFunc(buildHouse);
	glutMainLoop();
}
