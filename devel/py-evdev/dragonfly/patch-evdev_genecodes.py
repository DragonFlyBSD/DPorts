--- evdev/genecodes.py.orig	2024-09-15 20:05:43 UTC
+++ evdev/genecodes.py
@@ -19,7 +19,7 @@ if sys.argv[1:]:
 
 
 # -----------------------------------------------------------------------------
-macro_regex = r"#define +((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF|UI_FF|INPUT_PROP)_\w+)"
+macro_regex = r'#define(?: |\t)+((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF|UI_FF|INPUT_PROP)_\w+)'
 macro_regex = re.compile(macro_regex)
 
 uname = list(os.uname())
