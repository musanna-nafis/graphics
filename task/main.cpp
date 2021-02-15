#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);

int i;


	//for sky
	glBegin(GL_QUADS);
	glColor3ub(179, 237, 255);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
	glEnd();

//sun
GLfloat x=.6f; GLfloat y=.6f;
GLfloat radius2 =.2f;
GLfloat twicePi = 2.0f * PI;
int triangleAmount = 20;
glColor3ub(255, 204, 102);
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x+ (radius2* cos(i *  twicePi / triangleAmount)),
			    y+ (radius2* sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


//	for water

		glBegin(GL_QUADS);
	glColor3ub(00, 153, 204);
	glVertex2f(-1.0f, -0.2f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.2f);
	glEnd();

	// for road

	glBegin(GL_QUADS);
	glColor3ub(92, 92, 61);
	glVertex2f(-1.0f, -0.2f);
	glVertex2f(1.0f, -0.2f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();

	// Hill
glBegin(GL_TRIANGLES);
    glColor3ub(51, 204, 51);
    glVertex2f(-.8,.7);
    glVertex2f(-1.0,0.0);
    glVertex2f(-.6,-0.0);
    glVertex2f(-.4,0.6);
    glVertex2f(-.6,-0.0);
    glVertex2f(-.2,-0.0);
    glVertex2f(0.1,0.8);
    glVertex2f(-.2,-0.0);
    glVertex2f(0.4,-0.0);
    glVertex2f(0.6,0.6);
    glVertex2f(.4,0.0);
    glVertex2f(0.8,0.0);
    glVertex2f(0.9,0.5);
    glVertex2f(.6,0.0);
    glVertex2f(1.4,0.0);
    glVertex2f(-0.6,0.5);
    glVertex2f(-.8,0.0);
    glVertex2f(-.4,0.0);
    glVertex2f(-0.2,0.5);
    glVertex2f(-.4,0.0);
    glVertex2f(.2,0.0);
    glVertex2f(0.2,0.0);
    glVertex2f(.6,0.0);
    glVertex2f(.6,0.6);
    glEnd();

     //crane

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.8f, -0.1f);
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-.6f, -0.2f);
	glVertex2f(-0.6f, -.1f);
	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.75f, 0.6f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-.65f, -0.1f);
	glVertex2f(-0.65f, 0.6f);
	glEnd();

  glBegin(GL_QUADS);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.85f, 0.55f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-.1f, 0.5f);
	glVertex2f(-0.1f, .55f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.15,.5);
    glVertex2f(-.35,0.5);
    glVertex2f(-.35,0.5);
    glVertex2f(-.25,0.43);
    glVertex2f(-.25,0.43);
     glVertex2f(-.15,.5);
     glVertex2f(-.25,0.43);
     glVertex2f(-.25,.38);

      glVertex2f(-.35,.5);
       glVertex2f(-0.65f, 0.5f);
    glEnd();


     glBegin(GL_QUADS);
	glColor3ub(204, 204, 0);
	glVertex2f(-0.4f, 0.38f);
	glVertex2f(-0.4f, 0.22f);
	glVertex2f(-.1f, 0.22f);
	glVertex2f(-0.1f, .38f);
	glEnd();



//for ships's lower part
glBegin(GL_QUADS);
	glColor3ub(102, 0, 51);
	glVertex2f(-0.7f, -0.5f);
	glVertex2f(-0.6f, -0.8f);
	glVertex2f(0.5f, -0.8f);
	glVertex2f(0.8f, -0.5f);
	glEnd();

//for ship's upper part
	glBegin(GL_QUADS);
	glColor3ub(41, 61, 61);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.3f, -0.3f);
	glEnd();


//for box1
	glBegin(GL_QUADS);
	glColor3ub(153,153,102);
	glVertex2f(-0.6f, -0.3f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.3f, -0.3f);
	glEnd();

//for box2
	glBegin(GL_QUADS);
	glColor3ub(153, 102, 51);
		glVertex2f(-0.3f, -0.3f);
glVertex2f(-0.3f, -0.5f);

glVertex2f(-0.1f, -0.5f);
glVertex2f(-0.1f, -0.3f);
	glEnd();


glLineWidth(4.0);

//crane
	glBegin(GL_LINES);


	glColor3ub(102, 102, 153);
glVertex2f(-1.0f, 0.2f);
glVertex2f(-0.3f, 0.2f);

glVertex2f(-0.3f, 0.2f);
glVertex2f(-0.3f, -0.1f);


glVertex2f(-1.0f, 0.1f);
glVertex2f(-0.3f, 0.2f);
glEnd();

//for box3
	glBegin(GL_QUADS);
	glColor3ub(204, 153, 0);
		glVertex2f(-0.5f, -0.1f);
glVertex2f(-0.5f, -0.3f);

glVertex2f(0.0f, -0.3f);
glVertex2f(0.0f, -0.1f);
	glEnd();



	glBegin(GL_LINES);


	glColor3ub(102, 102, 153);
glVertex2f(-1.0f, 0.2f);
glVertex2f(-0.3f, 0.2f);

glVertex2f(-0.3f, 0.2f);
glVertex2f(-0.3f, -0.1f);


glVertex2f(-1.0f, 0.1f);
glVertex2f(-0.3f, 0.2f);
glEnd();








//car

GLfloat x1=.4f; GLfloat y1=-.067f;
GLfloat radius21 =.033f;
GLfloat twicePi3 = 2.0f * PI;
int triangleAmount1 = 20;
glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1+ (radius21* cos(i *  twicePi3 / triangleAmount1)),
			    y1+ (radius21* sin(i * twicePi3 / triangleAmount1))
			);
		}

	glEnd();



	GLfloat x2=.6f; GLfloat y2=-.067f;
GLfloat radius24 =.033f;
GLfloat twicePi4 = 2.0f * PI;
int triangleAmount2 = 20;
glColor3ub(0, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount2;i++) {
			glVertex2f(
		            x2+ (radius24* cos(i *  twicePi4 / triangleAmount2)),
			    y2+ (radius24* sin(i * twicePi4 / triangleAmount2))
			);
		}

	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
	glVertex2f(0.3f, -0.039f);
	glVertex2f(0.7f, -0.039f);
	glVertex2f(.7f, 0.15f);
	glVertex2f(0.3f, .15f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.3f, .15f);
	glVertex2f(.7f, 0.15f);
	glEnd();

		glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
	glVertex2f(.7f, 0.15f);
	glVertex2f(0.7f, -0.039f);
	glVertex2f(0.75f, -0.039f);
	glVertex2f(.75f, 0.12f);
	glEnd();

glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.6f, 0.3f);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.3f, .15f);
	glVertex2f(0.3f, .15f);
	glVertex2f(.7f, 0.15f);
	glVertex2f(.7f, 0.15f);
	 glVertex2f(0.6f, 0.3f);

	 glVertex2f(.5f, 0.3f);
	 glVertex2f(0.5f, 0.15f);


    glEnd();

//ex STAND

glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.03,0.0);
    glVertex2f(0.015,0.8);
    glEnd();

glBegin(GL_POLYGON);
	glColor3ub(153, 102, 51);
	glVertex2f(-0.01f, 0.8f);
	glVertex2f(-0.01f, 0.45f);
	glVertex2f(0.037f, 0.45f);
	glVertex2f(0.037f, 0.8f);
	glEnd();




	//TRAFFIC LIGHT



	GLfloat x10=.0135f; GLfloat y10=0.65f;
GLfloat radius210 =.023f;
GLfloat twicePi30 = 2.0f * PI;
int triangleAmount10 = 20;
glColor3ub(255, 255, 0);
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10);
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x10+ (radius210* cos(i *  twicePi30 / triangleAmount10)),
			    y10+ (radius210* sin(i * twicePi30 / triangleAmount10))
			);
		}

	glEnd();



	GLfloat x20=.0135f; GLfloat y20=.75f;
GLfloat radius240 =.023f;
GLfloat twicePi40 = 2.0f * PI;
int triangleAmount20 = 20;
glColor3ub(255, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x20, y20); // center of circle
		for(i = 0; i <= triangleAmount20;i++) {
			glVertex2f(
		            x20+ (radius240* cos(i *  twicePi40 / triangleAmount20)),
			    y20+ (radius240* sin(i * twicePi40 / triangleAmount20))
			);
		}

	glEnd();

	GLfloat x200=.0135f; GLfloat y200=.55f;
GLfloat radius2400 =.023f;
GLfloat twicePi400 = 2.0f * PI;
int triangleAmount200 = 20;
glColor3ub(0, 255, 0);
glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x200, y200); // center of circle
		for(i = 0; i <= triangleAmount20;i++) {
			glVertex2f(
		            x200+ (radius2400* cos(i *  twicePi400 / triangleAmount200)),
			    y200+ (radius2400* sin(i * twicePi400 / triangleAmount200))
			);
		}

	glEnd();





	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
