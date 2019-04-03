--- ncurses/_curses_wrap.c.intermediate	2019-04-02 08:08:12 UTC
+++ ncurses/_curses_wrap.c
@@ -1133,7 +1133,7 @@ extern int init_color(short ,short ,shor
 extern int init_pair(short ,short ,short );
 extern int intrflush(WINDOW *,bool );
 extern bool isendwin();
-extern bool is_linetouched(WINDOW *,int );
+/*extern bool is_linetouched(WINDOW *,int );*/
 extern bool is_wintouched(WINDOW *);
 /*extern const char *keyname(int );*/
 extern int keypad(WINDOW *,bool );
