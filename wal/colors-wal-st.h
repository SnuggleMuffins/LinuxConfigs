const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0E1012", /* black   */
  [1] = "#344748", /* red     */
  [2] = "#1E5069", /* green   */
  [3] = "#545C57", /* yellow  */
  [4] = "#AF5E24", /* blue    */
  [5] = "#DAAF3F", /* magenta */
  [6] = "#316B93", /* cyan    */
  [7] = "#aabfc4", /* white   */

  /* 8 bright colors */
  [8]  = "#768589",  /* black   */
  [9]  = "#344748",  /* red     */
  [10] = "#1E5069", /* green   */
  [11] = "#545C57", /* yellow  */
  [12] = "#AF5E24", /* blue    */
  [13] = "#DAAF3F", /* magenta */
  [14] = "#316B93", /* cyan    */
  [15] = "#aabfc4", /* white   */

  /* special colors */
  [256] = "#0E1012", /* background */
  [257] = "#aabfc4", /* foreground */
  [258] = "#aabfc4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
