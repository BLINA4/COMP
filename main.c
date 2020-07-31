/***************************************************************
 * Copyleft 2020
 *   Junior C programmers present
 ***************************************************************/
 
/* FILE NAME   : main.c
 * PURPOSE     : 2D game project.
 *               Main file of project.
 * PROGRAMMER  : Andrey Shayda, Petr Petrovich, Ignat Krisow.
 * LAST UPDATE : 30.07.2020.
 *
 * All parts of this file may be changed without agreement
 *   of programmer if you give credits to author.
 */

#include "comdef.h"
#include "units.h"

/* Main display function.
 * ARGUMENTS: None.
 * RETURNS: None.
 */
VOID Display( VOID )
{
  glClearColor(0.3, 0.5, 0.7, 1);
  glClear(GL_COLOR_BUFFER_BIT);

  glRasterPos2d(-1, 1);
  
  glFinish();
  glutSwapBuffers();
  glutPostRedisplay();
} /* End of 'Display' function */

/* Keyboard handle function.
 * ARGUMENST:
 *   - Key symbol byte
 *       BYTE Key;
 *   - Coordinates
 *       INT x, INT y;
 * RETURNS: None.
 */
VOID Keyboard( BYTE Key, INT x, INT y )
{
  if (Key == 27)
    exit(0);
  if (Key == 'f')
    glutFullScreen(); 
} /* End of 'Keyboard' function */

/* Main programm function.
 * ARGUMENTS: 
 *   - System arguments:
 *       INT argc, CHAR *argv[];
 * RETURN: None.
 */
VOID main( INT argc, CHAR *argv[] )
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
 
  glutInitWindowPosition(0, 0);
  glutInitWindowSize(0, 0);
 
  glutCreateWindow("COMP_MASTER");
  glutDisplayFunc(Display);
  glutKeyboardFunc(Keyboard);
 
  glutMainLoop();
} /* End of 'main' function */

/* END OF FILE 'main.c' */

