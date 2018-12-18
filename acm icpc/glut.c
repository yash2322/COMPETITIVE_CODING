#include<GL/glut.h>
int move;
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glVertex2(-0.2,0.0);
glVertex2(-0.2,0.0);
glVertex2(-0.0,0.2);
glEnd();
glFlush();
}
void Time(int a)
{
    if(move==1)
    {
        glTranslatef(0.1,0.0,0.0);
    }
    if(move==2)
    {
        glTranslatef(-0.1,0.0,0.0);
    }
    glutPostRedisplay();
    gluttimerFunc(100,TIme,0);
}
void key(unsigned char k,int x,int y)
{
    if(k=='d'||k=='D')
    {
        move=1;
    }
    if(k=='a'||k=='A')
        move=2;
}
int main(int &argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("MOVE_fn");
    glutKeyBoardFunc(key);
    glutTimerFunc(100,Time,0);
    glutDisplayFunc(display);
    glutMainLoop();

    /*
    20 mins




    */

}
