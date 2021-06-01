static int topbar = 1;  // -b option; if 0, dmenu appears at bottom

// -fn option overrides fonts[0]; default X11 font or font set
static const char *fonts[] = {
	"Ubuntu:weight=bold:size=11:antialias=true:autohint=true"
};
static const char *prompt = NULL;  // -p option; prompt to the left of input field
static const char *colors[SchemeLast][2] = {
    //                   fg   ,     bg
    [SchemeNorm] = { "#DaDaDa", "#00041f" },  // Items
    [SchemeSel]  = { "#F1F1F1", "#0c4eC9" },  // Border, Selected
    [SchemeOut]  = { "#000000", "#00FfFf" },
    [SchemeNormHighlight] = { "#ffc978", "#222222" },
    [SchemeSelHighlight]  = { "#ffc978", "#005577" },
    [SchemeOutHighlight]  = { "#ffc978", "#00ffff" },
};

// Border
static unsigned int lines = 0;  // -l option; if non-zero, dmenu uses vertical list with given number of lines
static const char worddelimiters[] = " ";
static const unsigned int border_width = 4;

// Center
static int centered  = 0;    // -c option; centers dmenu on screen
static int min_width = 640;  // minimum width when centered

// Grid
static unsigned int columns = 0;

// Line height
static unsigned int lineheight     = 32;  // -h option; minimum height of a menu line
static unsigned int min_lineheight = 20;
