#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(10);

	glBegin(GL_LINES);

    //Line Drawing For A
    glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.6f, -0.8f);
	glVertex2f(-0.9f, -0.3f);
	glVertex2f(-0.7f, -0.3f);
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.9f, 0.8f);
	glVertex2f(-0.7f, 0.8f);
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.9f, 0.8f);
    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.6f, -0.8f);
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, 0.5f);
	//Line Drawing For I
	glColor4f(1.0f, 0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -0.8f);
    glVertex2f(-0.2f, -0.8f);
    glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
    glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.2f, -0.8f);
	glVertex2f(-0.2f, -0.6f);
	glVertex2f(-0.4f, -0.6f);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.5f, 0.6f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.8f);
    //Line Drawing For U
    glColor3f(2.0f, 0.5f, 1.0f);
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.5f, -0.8f);
    glVertex2f(0.2f, -0.6f);
	glVertex2f(0.3f, -0.6f);
    glVertex2f(0.0f, 0.8f);
	glVertex2f(0.2f, 0.8f);
	glVertex2f(0.3f, 0.8f);
	glVertex2f(0.5f, 0.8f);
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, 0.8f);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.3f, 0.8f);
    glVertex2f(0.5f, -0.8f);
    glVertex2f(0.5f, 0.8f);
    //Line Drawing For B
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2f(0.6f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.7f, -0.6f);
	glVertex2f(0.9f, -0.6f);
    glVertex2f(0.7f, -0.4f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.7f, -0.4f);
	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.9f, -0.4f);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(1.0f, 0.7f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.6f, -0.8f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.9f, 0.6f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.6f, 0.0f);

	glEnd();

	glFlush();
}





int main(int argc, char** argv){
    glutInitWindowSize(1152, 648);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("AIUB");
    glutInit(&argc, argv);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
