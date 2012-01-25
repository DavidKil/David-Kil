#include <glut.h>
#include <stdio.h>
#include <string.h>



GLfloat angle = 0.0; //the rotation value
char word1[20];
int i=0;
void vertline (void);
void horizline (void);
void diagleft();
void letter_a(); 
void letter_b();
void letter_c();
void letter_d();
void letter_e();
void letter_f();
void letter_g();
void letter_h();
void letter_i();
void letter_j();
void letter_k();
void letter_l();
void letter_m();
void letter_n();
void letter_o();
void letter_p();
void letter_q();
void letter_r();
void letter_s();
void letter_t();
void letter_u();
void letter_v();
void letter_w();
void letter_x();
void letter_y();
void letter_z();
void test(char *word1);  //




void drawcube() {
  
  glColor3f(1.0, 0.0, 0.0);

  //left face: 

  glBegin(GL_POLYGON);
  glVertex3f(-0.5, 0.5, 0.5); //v5
  glVertex3f(-0.5, 0.5, -0.5); //v4
  glVertex3f(-0.5, -0.5, -0.5); //v1
  glVertex3f(-0.5, -0.5, 0.5); //v8
  glEnd();
  
  //right face:  

  glBegin(GL_POLYGON);
  glVertex3f(0.5, -0.5, -0.5); //v2
  glVertex3f(0.5, 0.5, -0.5); //v3
  glVertex3f(0.5, 0.5, 0.5); //v6
  glVertex3f(0.5, -0.5, 0.5); 
  glEnd();
  
  //bottom face:
 
  glBegin(GL_POLYGON);
  glVertex3f(-0.5, -0.5, 0.5); //v8
  glVertex3f(0.5, -0.5, 0.5); //v7
  glVertex3f(0.5, -0.5, -0.5); //v2
  glVertex3f(-0.5, -0.5, -0.5); //v1
  glEnd();
  
  //top face: 
 
  glBegin(GL_POLYGON);
  glVertex3f(0.5, 0.5, -0.5); //v3
  glVertex3f(-0.5, 0.5, -0.5); //v4
  glVertex3f(-0.5, 0.5, 0.5); //v5
  glVertex3f(0.5, 0.5, 0.5); //v6
  glEnd();
  
  //front face: 
 
  glBegin(GL_POLYGON);
  glVertex3f(-0.5, 0.5, 0.5); //v5
  glVertex3f(0.5, 0.5, 0.5); //v6
  glVertex3f(0.5, -0.5, 0.5); //v7
  glVertex3f(-0.5, -0.5, 0.5); //v8
  glEnd();

  //back face:  

  glBegin(GL_POLYGON);
  glVertex3f(-0.5, -0.5, -0.5); //v1
  glVertex3f(0.5, -0.5, -0.5); //v2
  glVertex3f(0.5, 0.5, -0.5); //v3
  glVertex3f(-0.5, 0.5, -0.5); //v4
  glEnd();
  
}





void rotate() {
//glRotatef(angle, 1.0, 0.0, 0.0); //rotate on the x axis

glRotatef(angle, 0.0, 1.0, 0.0); //rotate on the y axis
glTranslatef(-75,0,0);
//glRotatef(angle, 0.0, 0.0, 1.0); //rotate on the z axis
glColor3f(1.0, 0.0, 0.0);


}
void display (void) {

glClearColor (0.0,0.0,0.0,1.0);
glClear (GL_COLOR_BUFFER_BIT);
glLoadIdentity(); 
glFrustum(-100,100,-100,100,-50,200);

gluLookAt (0, 0, 100.0,
		   0.0, 0.0, 0.0,
		   0.0, 1.0, 0.0);
rotate();
test(word1);

glutSwapBuffers();
angle= angle + 0.05;

}

void reshape (int w, int h) {
glViewport (0, 0, (GLsizei)w, (GLsizei)h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective (100, (GLfloat)w / (GLfloat)h, 1, 500.0);
glMatrixMode (GL_MODELVIEW);
}
int main (int argc, char **argv)
{
printf("Please enter the string you wish to display:\n");
gets(word1);
glutInit (&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE); //set up the double buffering
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("A basic OpenGL Window");
glutDisplayFunc (display);
glutIdleFunc (display);
glutReshapeFunc (reshape);
glutMainLoop ();
return 0;
}



void vertline() {
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
}

void horizline() {
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(1, 0, 0);
}

void diagleft() {
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
}


void letter_a() {
	vertline();
	glTranslatef(0, -3, 0);
	horizline();
	glTranslatef(-5, 3, 0);
	horizline();
	glTranslatef(0, -6, 0);
	vertline();
	glTranslatef(-5, -6, 0);

}


void letter_b() {
	horizline();
	glTranslatef(-5, 0, 0);
	vertline();
	glTranslatef(0, -3, 0);
	horizline();
	glTranslatef(-5, 3, 0);
	horizline();
	glTranslatef(0, -6, 0);
	vertline();
	glTranslatef(-5, -6, 0);
}


void letter_c() {
	horizline();
	glTranslatef(-5, 0, 0);
	vertline();
	horizline();
	glTranslatef(-5, -6, 0);
	
}

void letter_d() {
	horizline();
	glTranslatef(-5, 0, 0);
	vertline();
	horizline();
	glTranslatef(0, -6, 0);
	vertline();
	glTranslatef(-5, -6, 0);

	
}

void letter_e() {
	horizline();
	glTranslatef(-5, 0, 0);
	vertline();
	glTranslatef(0, -3, 0);
	horizline();
	glTranslatef(-5, 3, 0);
	horizline();
	glTranslatef(-5, -6, 0);
}


void letter_f() {
	vertline();
	glTranslatef(0, -3, 0);
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(-2, 3, 0);
	horizline();
	glTranslatef(-5, -6, 0);
	
}
void letter_g() {
	horizline();
	glTranslatef(-5, 0, 0);
	vertline();
	horizline();
	glTranslatef(-1, -5, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(0, 1, 0);
	drawcube();
	glTranslatef(-1, 0, 0);
	drawcube();
	glTranslatef(-3, -3, 0);
}

void letter_h() {
	vertline();
	glTranslatef(0, -3, 0);
	horizline();
	glTranslatef(0, -3, 0);
	vertline();
	glTranslatef(-5, -6, 0);
}

void letter_i() {
	glTranslatef(2,0,0);
	vertline();
	glTranslatef(-2, -6, 0);
}
void letter_j() {
	horizline();
	vertline();
	glTranslatef(-5, -6, 0);
}
void letter_k() {
	vertline();
	glTranslatef(1, -3, 0);
	drawcube();				// up-right line
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(-2,-4,0); // down-right line
	drawcube();
	glTranslatef(1, -1, 0);
	drawcube();
	glTranslatef(1, -1, 0);
	drawcube();
	glTranslatef(-4, 0, 0);

}

void letter_l() {
	vertline();
	glTranslatef(0, -6, 0);
	horizline();
	glTranslatef(-5, 0, 0);
}
void letter_m() {
	vertline();
	glTranslatef(1, -1, 0); 
	drawcube();				// down-right line
	glTranslatef(1, -1, 0);
	drawcube();
	glTranslatef(1, 0, 0);
	drawcube();
	glTranslatef(1, 1, 0);
	drawcube();
	glTranslatef(1, -5, 0);
	vertline();
	glTranslatef(-5, -6, 0);
}

void letter_n() {
vertline();
	glTranslatef(5,-6,0);
	vertline();
	glTranslatef(-4,0,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();	
	glTranslatef(0.5,-1,0);
	drawcube();	
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(-4,0,0);	

}

void letter_o() {
	glTranslatef(0,2,0);
	drawcube();
	glTranslatef(0,1,0);
	drawcube();
	glTranslatef(0,1,0);
	drawcube();
	glTranslatef(0.75,1,0);
	drawcube();
	glTranslatef(0.75,1,0);
	drawcube();
	glTranslatef(1,0,0);
	drawcube();
	glTranslatef(1,0,0);
	drawcube();
	glTranslatef(0.75,-1,0);
	drawcube();
	glTranslatef(0.75,-1,0);
	drawcube();
	glTranslatef(0,-1,0);
	drawcube();
	glTranslatef(0,-1,0);
	drawcube();
	glTranslatef(-0.75,-1,0);
	drawcube();
	glTranslatef(-0.75,-1,0);
	drawcube();
	glTranslatef(-1,0,0);
	drawcube();
	glTranslatef(-1,0,0);
	drawcube();
	glTranslatef(-0.75,1,0);
	drawcube();
	glTranslatef(-0.75,-1,0);
}



void letter_p() {
	vertline();
	glTranslatef(0, -3, 0);
	horizline();
	glTranslatef(-5, 3, 0);
	horizline();
	drawcube();
	glTranslatef(0, -1, 0);	
	drawcube();
	glTranslatef(0, -1, 0);	
	drawcube();
	glTranslatef(0, -1, 0);	
	drawcube();
	glTranslatef(-5, -3, 0);



}
void letter_q() {
	horizline();
	glTranslatef(-5, 0, 0);
	vertline();
	horizline();
	glTranslatef(0, -6, 0);
	vertline();
	glTranslatef(-1, -5, 0);
	drawcube();
	glTranslatef(-1, 1, 0);
	drawcube();
	glTranslatef(-3, -2, 0);

}
void letter_r() {
vertline();
	glTranslatef(0, -2, 0);
	horizline();
	glTranslatef(-5, 2, 0);
	horizline();
	drawcube();
	glTranslatef(0, -1, 0);	
	drawcube();
	glTranslatef(0, -1, 0);	
	drawcube();
	glTranslatef(-4, -1, 0);
	drawcube();
	glTranslatef(1, -0.75, 0);
	drawcube();
	glTranslatef(1, -0.75, 0);
	drawcube();
	glTranslatef(1, -0.75, 0);
	drawcube();
	glTranslatef(1, -0.75, 0);
	drawcube();
	glTranslatef(-5, 0, 0);

}
void letter_s(){
horizline();
glTranslatef(-1,1,0);
drawcube();
glTranslatef(0,1,0);
drawcube();
glTranslatef(0,1,0);
drawcube();
glTranslatef(-4,0,0);
horizline();
glTranslatef(-5,1,0);
drawcube();
glTranslatef(0,1,0);
drawcube();
glTranslatef(0,1,0);
horizline();
glTranslatef(-5,-6,0);


}
void letter_t(){
glTranslatef(3,0,0);
vertline();
glTranslatef(-2,0,0);
horizline();
glTranslatef(-5,-6,0);
}
void letter_u(){
	vertline();
	glTranslatef(0, -6, 0);
	horizline();
	vertline();
	glTranslatef(-5, -6, 0);}
void letter_v(){
glTranslatef(0,6,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.5,-1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(-5,-6,0);

}
void letter_w(){
glTranslatef(0,6,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.5,-1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,-1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(0.25,1,0);
drawcube();
glTranslatef(-5,-6,0);
}
void letter_x(){
	glTranslatef(0,5,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();	
	glTranslatef(0.5,-1,0);
	drawcube();	
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0.5,-1,0);
	drawcube();
	glTranslatef(0,6,0);
	drawcube();
	glTranslatef(-0.5,-1,0);
	drawcube();
	glTranslatef(-0.5,-1,0);
	drawcube();
	glTranslatef(-0.5,-1,0);
	drawcube();
	glTranslatef(-0.5,-1,0);
	drawcube();
	glTranslatef(-0.5,-1,0);
	drawcube();
	glTranslatef(-0.5,-1,0);
	drawcube();
	
}
void letter_y(){
glTranslatef(0,6,0);
drawcube();				// down-right line
glTranslatef(1, -1, 0);
drawcube();
glTranslatef(1, -1, 0);
drawcube();
glTranslatef(0.75,-1,0);
drawcube();
glTranslatef(0.75, 1, 0);
drawcube();
glTranslatef(1, 1, 0);
drawcube();
glTranslatef(1, 1, 0);
drawcube();
glTranslatef(-2.75, -4, 0);
drawcube();
glTranslatef(0, -1, 0);
drawcube();
glTranslatef(0, -1, 0);
drawcube();
glTranslatef(-3, 0, 0);


}
void letter_z(){
	glTranslatef(0,6,0);
	horizline();
	drawcube();
	glTranslatef(-0.75,-1,0);
	drawcube();	
	glTranslatef(-0.75,-1,0);
	drawcube();	
	glTranslatef(-0.75,-1,0);
	drawcube();
	glTranslatef(-0.75,-1,0);
	drawcube();
	glTranslatef(-0.75,-1,0);
	drawcube();
	glTranslatef(-0.75,-1,0);
	drawcube();
	horizline();
	glTranslatef(-5,0,0);
	

}



/* Repeatitive creating of letters using polygons */

void test(char *word1) {
	word1[19] = '\0';

for (i=0; i< 20; i++)
{
	if (word1[i] == 'a'|| word1[i] == 'A')
	{
		letter_a();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'b'|| word1[i] == 'B')
	{
	letter_b();
	glTranslatef(8, 0, 0);
	

	}
	if (word1[i] == 'c'|| word1[i] == 'C')
	{
		letter_c();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'd'|| word1[i] == 'D')
	{
		letter_d();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'e'|| word1[i] == 'E')
	{
		letter_e();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'f'|| word1[i] == 'F')
	{
		letter_f();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'g'|| word1[i] == 'G')
	{
		letter_g();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'h'|| word1[i] == 'H')
	{
		letter_h();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'i'|| word1[i] == 'I')
	{
		letter_i();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'j'|| word1[i] == 'J')
	{
		letter_j();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'k'|| word1[i] == 'K')
	{
		letter_k();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'l'|| word1[i] == 'L')
	{
		letter_l();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'm'|| word1[i] == 'M')
	{
		letter_m();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'n'|| word1[i] == 'N')
	{
		letter_n();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'o'|| word1[i] == 'O')
	{
		letter_o();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'p'|| word1[i] == 'P')
	{
		letter_p();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'q'|| word1[i] == 'Q')
	{
		letter_q();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'r'|| word1[i] == 'R')
	{
		letter_r();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 's'|| word1[i] == 'S')
	{
		letter_s();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 't'|| word1[i] == 'T')
	{
		letter_t();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'u'|| word1[i] == 'U')
	{
		letter_u();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'v'|| word1[i] == 'V')
	{
		letter_v();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'w'|| word1[i] == 'W')
	{
		letter_w();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'x'|| word1[i] == 'X')
	{
		letter_x();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'y'|| word1[i] == 'Y')
	{
		letter_y();
		glTranslatef(8, 0, 0);
		
	}
	if (word1[i] == 'z' || word1[i] == 'Z')
	{
		letter_z();
		glTranslatef(8, 0, 0);
		
	}
	
	/* insert letters from r onwards in here */
   if (word1[i] == ' ')
   {
	   glTranslatef(8, 0, 0);
   }

}
}


