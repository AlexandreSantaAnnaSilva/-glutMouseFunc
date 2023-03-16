#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>

int muda = 0;

void keyboard(unsigned	char key, int x, int y){
switch	(key)	{
    case	'e':
    case	'E':
    exit(0);
    break;
    }
}

void display (void){
   
  	if(muda == 0){
  	
	  	glClear	(GL_COLOR_BUFFER_BIT);
	
		glColor3f	(1.0,	1.0,	1.0);
		glPolygonMode(GL_FRONT_AND_BACK,GL_LINES);
				glBegin(GL_POLYGON);
								glVertex3f	(0.25,	0.25,	0.0);
								glVertex3f	(0.75,	0.25,	0.0);
								glVertex3f	(0.75,	0.75,	0.0);
		glEnd();
	  } else {
	  	
		  glClear	(GL_COLOR_BUFFER_BIT);

		glColor3f	(1.0,	0.0,	0.0);
		glPolygonMode(GL_FRONT_AND_BACK,GL_LINES);
				glBegin(GL_POLYGON);
								glVertex3f	(0.25,	0.25,	0.0);
								glVertex3f	(0.25,	0.75,	0.0);
								glVertex3f	(0.75,	0.75,	0.0);
		glEnd();
	  }
	
	glFlush	();
}

void	init	(void){
	glClearColor	(0.0,	0.0,	0.0,	0.0);
	glMatrixMode(GL_PROJECTION);
				glLoadIdentity();
				glOrtho(0.0,	1.0,	0.0,	1.0,	-1.0,	1.0);
}


void mousefuc (int button , int state , int x , int y){
	
	if(button == GLUT_LEFT_BUTTON && state == GLUT_UP){
		if(muda == 0){
			muda = 1;
			
		} else {
			muda = 0;
		}
}
}

int	main(int argc,	char**	argv)
{
			glutInit(&argc,	argv);
			glutInitDisplayMode	(GLUT_SINGLE	|	GLUT_RGB);
			glutInitWindowSize (300,	300);	
			glutInitWindowPosition	(100,	100);
			glutCreateWindow	("Atividade 4");
			init	();
			glutDisplayFunc(display);
            glutMouseFunc(mousefuc);
			glutKeyboardFunc(keyboard);
			glutMainLoop();
				return	0; 
}


