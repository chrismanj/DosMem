/* +++Date last modified: 02-Nov-1995 */

/*
**  This is a copyrighted work which is functionally identical to work
**  originally published in Micro Cornucopia magazine (issue #52, March-April,
**  1990) and is freely licensed by the author, Walter Bright, for any use.
*/

/*_ toolkit.h   Tue Apr 18 1989   Modified by: Walter Bright */

#ifndef TOOLKIT_H
#define TOOLKIT_H

/* Macros so that we can do prototyping, but still work with non- */
/* prototyping compilers:                                   */

#ifdef DEBUG
  #define debug(a)  (a)
#else
  #define debug(a)
#endif

#endif /* TOOLKIT_H */
