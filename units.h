/***************************************************************
 * Copyleft 2020
 *   Junior C programmers present
 ***************************************************************/
 
/* FILE NAME   : units.h
 * PURPOSE     : 2D game project.
 *               Units structures header file.
 * PROGRAMMER  : Andrey Shayda, Petr Petrovich, Ignat Krisow.
 * LAST UPDATE : 30.07.2020.
 *
 * All parts of this file may be changed without agreement
 *   of programmer if you give credits to author.
 */

#ifndef __units_h_
#define __units_h_

#include "comdef.h"

typedef struct tagGAME_UNIT GAME_UNIT;

struct tagGAME_UNIT
{
  /* OS UNIT */
  /* PROGRAMM UNITS */
};

typedef struct tagPR_UNIT PR_UNIT;

struct tagPR_UNIT
{
  CHAR Name[32];
  BOOL IsActive;
  /* FUNCTIONS 
   *   - close
   *   - open
   *   ...
   * */
};

#endif /* __units_h */

/* END OF 'units.h' FILE */

