static const char norm_fg[] = "#aabfc4";
static const char norm_bg[] = "#0E1012";
static const char norm_border[] = "#768589";

static const char sel_fg[] = "#aabfc4";
static const char sel_bg[] = "#1E5069";
static const char sel_border[] = "#aabfc4";

static const char urg_fg[] = "#aabfc4";
static const char urg_bg[] = "#344748";
static const char urg_border[] = "#344748";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
