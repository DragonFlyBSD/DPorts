--- evdev/genecodes.py.orig	2020-11-02 00:44:50 UTC
+++ evdev/genecodes.py
@@ -20,7 +20,7 @@ if sys.argv[1:]:
 
 
 #-----------------------------------------------------------------------------
-macro_regex = r'#define +((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF|UI_FF|INPUT_PROP)_\w+)'
+macro_regex = r'#define(?: |\t)+((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF|UI_FF|INPUT_PROP)_\w+)'
 macro_regex = re.compile(macro_regex)
 
 uname = list(os.uname()); del uname[1]
