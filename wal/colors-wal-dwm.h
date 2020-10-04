static const char norm_fg[] = "#d4cdcc";
static const char norm_bg[] = "#192141";
static const char norm_border[] = "#948f8e";

static const char sel_fg[] = "#d4cdcc";
static const char sel_bg[] = "#4778C2";
static const char sel_border[] = "#d4cdcc";

static const char urg_fg[] = "#d4cdcc";
static const char urg_bg[] = "#53689C";
static const char urg_border[] = "#53689C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
