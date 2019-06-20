--- evdev/genecodes.py.intermediate	2019-06-12 15:05:09.000000000 +0000
+++ evdev/genecodes.py
@@ -20,7 +20,7 @@ if sys.argv[1:]:
 
 
 #-----------------------------------------------------------------------------
-macro_regex = r'#define +((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF)_\w+)'
+macro_regex = r'#define(?: |\t)+((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF)_\w+)'
 macro_regex = re.compile(macro_regex)
 
 uname = list(os.uname()); del uname[1]
