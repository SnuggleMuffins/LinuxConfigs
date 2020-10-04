const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#192141", /* black   */
  [1] = "#53689C", /* red     */
  [2] = "#4778C2", /* green   */
  [3] = "#A47D84", /* yellow  */
  [4] = "#3E81BD", /* blue    */
  [5] = "#5D87B7", /* magenta */
  [6] = "#5D92CA", /* cyan    */
  [7] = "#d4cdcc", /* white   */

  /* 8 bright colors */
  [8]  = "#948f8e",  /* black   */
  [9]  = "#53689C",  /* red     */
  [10] = "#4778C2", /* green   */
  [11] = "#A47D84", /* yellow  */
  [12] = "#3E81BD", /* blue    */
  [13] = "#5D87B7", /* magenta */
  [14] = "#5D92CA", /* cyan    */
  [15] = "#d4cdcc", /* white   */

  /* special colors */
  [256] = "#192141", /* background */
  [257] = "#d4cdcc", /* foreground */
  [258] = "#d4cdcc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
