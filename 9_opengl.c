#include<GL/glut.h>

void MyInit(){
    glClearColor (0, 0, 0, 1) ;
    glColor3f (1, 0, 0);
}

void draw(){
    glclear (GL_COLOR _BUFFER_BIT);
    glPointSize(10);
    glBegin (GL_POINTS);
        glVertex2f ( 0.5,-0.5);
        glVertex2f (-0.5,-0.5) ;
    glEnd () ;

    glBegin (GL_LINES):
        glvertex2f (-0.5, 0.5);
        glVertex2f ( 0.5, 0.5):
    glEnd () ;
    g1Flush ();
}
int main(int argc, char *argv[])
{
    glutInit (&argc,argv) ;
    glutInitWindowPosition (250,50);
    glutInitWindowSize (600, 600);
    glutInitDisplayMode (GLUT RGB | GLUT SINGLE) :
    glutCreatewindow ("Basic OpenGL Program");
    MyInit ();
    glutDisplayFunc (draw);
    glutMainloop () ;
    return 0;
}