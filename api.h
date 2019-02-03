char *api_malloc(int size);
int api_alloctimer(void);
int api_getkey(int mode);
int api_openwin(char *buf, int xsiz, int ysiz, int col_inv, char *title);
void api_beep(int tone);
void api_boxfilwin(int win, int x0, int y0, int x1, int y1, int col);
void api_closewin(int win);
void api_end(void);
void api_initmalloc(void);
void api_inittimer(int timer, int data);
void api_linewin(int win, int x0, int y0, int x1, int y1, int col);
void api_point(int win, int x, int y, int col);
void api_putchar(int c);
void api_putstr0(char *s);
void api_putstrwin(int win, int x, int y, int col, int len, char *str);
void api_refreshwin(int win, int x0, int y0, int x1, int y1);
void api_settimer(int timer, int time);
int api_fopen(char *fname);
void api_fclose(int fhandle);
void api_fseek(int fhandle, int offset, int mode);
int api_fsize(int fhandle, int mode);
int api_fread(char *buf, int maxsize, int fhandle);
int api_cmdline(char *buf, int maxsize);
int api_getlang(void);
