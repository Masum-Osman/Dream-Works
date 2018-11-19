#include <GL/glut.h>
#include <math.h>
#include <windows.h>

static float	tx	=  0.0;
static float	ty	=  0.0;

/*void init(void) done
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-1000.0, 1000.0, -1000.0, 1000.0);
}*/

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);   //must here
    glColor3f(0, 1, 1.0);        // Set foreground color & has 3 attribute with range (0-1) or (0f-1f)
	glBegin(GL_QUADS);  //start square
	glVertex2i(tx+100, ty+0); // Define vertices in counter-clockwise (CCW) order
	glVertex2i(tx+300, ty+0);
	glVertex2i(tx+300, ty+500);
	glVertex2i(tx+100, ty+500);
	glEnd();   //end square



	 //end square

	glFlush();
	glutSwapBuffers();

			//ty++;
			//tx--;
			//ty--;
			tx++;
			Sleep(10);
			if(tx==1000)
            {
                tx	=  0.0;
            }
			glutPostRedisplay();

}

/*int main(int argc, char** argv) done
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(600, 50);
	glutInitWindowSize(400, 400);
	glutCreateWindow("House Section OpenGL");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
*/
