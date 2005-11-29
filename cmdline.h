/*
 * Copyright 2005 Timo Hirvonen
 */

#ifndef CMDLINE_H
#define CMDLINE_H

#include <uchar.h>

struct cmdline {
	/* length in bytes */
	int blen;

	/* length in characters */
	int clen;

	/* pos in bytes */
	int bpos;

	/* pos in characters */
	int cpos;

	/* allocated size */
	int size;

	char *line;
};

extern struct cmdline cmdline;

void cmdline_init(void);
void cmdline_insert_ch(uchar ch);
void cmdline_backspace(void);
void cmdline_delete_ch(void);
void cmdline_set_text(const char *text);
void cmdline_clear(void);
void cmdline_move_left(void);
void cmdline_move_right(void);
void cmdline_move_home(void);
void cmdline_move_end(void);

#endif