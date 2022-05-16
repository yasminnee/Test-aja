#include <windows.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <Math.h>

void Int(void) {
	glClearColor(0.0,0.0,0.0,0.0); 
	glPointSize(4.0); // Ukuran titik 4x4 pixel
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(4.0f);
	gluOrtho2D(0., 500., 0., 400.);
}

void display(void){
	glClear (GL_COLOR_BUFFER_BIT);

	//HURUF P
	//poligon/garis 1
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 1.0);
	glVertex2i(90,80);
	glVertex2i(120,80);
	glVertex2i(120,330);
	glVertex2i(90,330);
	glEnd();
	
	//poligon/garis 2
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(120,330);
	glVertex2i(250,330);
	glVertex2i(250,300);
	glVertex2i(120,300);
	glEnd();
	
	//poligon/garis 3
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.5, 1.0);
	glVertex2i(250,300);
	glVertex2i(220,300);
	glVertex2i(220,200);
	glVertex2i(250,200);
	glEnd();
	
	//poligon/garis 4
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.5);
	glVertex2i(220,200);
	glVertex2i(220,230);
	glVertex2i(120,230);
	glVertex2i(120,200);
	glEnd();
	
	glFlush();
	glutSwapBuffers();
}

int main(int arcg, char **argv){
	glutInit(&arcg,argv);
	glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500,400);
	glutCreateWindow("NAMA");
	glutDisplayFunc(display);
	Int();
	glutMainLoop();
	return 0;
}
