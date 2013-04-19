//Font Colors:
#ifndef TERMINAL_COLORS_LLAU_H_
#define TERMINAL_COLORS_LLAU_H_

/*
    llauColors.h
    by Jose Llausas on March 2013
    Outputs to terminal in different colors.
 */

#define TERM_BLACK 		"\033[30m"
#define TERM_RED 		"\033[31m"
#define TERM_GREEN 		"\033[32m"
#define TERM_YELLOW 	"\033[33m"
#define TERM_BLUE 		"\033[34m"
#define TERM_MAGENTA 	"\033[35m"
#define TERM_CYAN 		"\033[36m"
#define TERM_WHITE 		"\033[37m"

//Background Colors:
#define TERM_BG_BLACK 	"\033[40m"
#define TERM_BG_RED		"\033[41m"
#define TERM_BG_GREEN	"\033[42m"
#define TERM_BG_YELLOW	"\033[43m"
#define TERM_BG_BLUE 	"\033[44m"
#define TERM_BG_MAGENTA "\033[45m"
#define TERM_BG_CYAN	"\033[46m"
#define TERM_BG_WHITE	"\033[47m"

//Test Attributes:
#define TERM_BOLD		"\033[1m"
#define TERM_UNDERLINE	"\033[4m"
#define TERM_BLINK		"\033[5m"
#define TERM_INVERSE	"\033[7m"
#define TERM_STRIKEOUT	"\033[8m"
#define TERM_OFF		"\033[0m"

#define endl "\033[0m\n"

#define TERM_IMPORTANT "\033[1;44;37m"
#define TERM_ERROR "\033[1;5;41;37m"

#endif