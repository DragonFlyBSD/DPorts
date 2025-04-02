--- src/evdev/genecodes_c.py.orig	Wed Apr  2 18:36:48 2025
+++ src/evdev/genecodes_c.py	Wed Apr
@@ -25,7 +25,7 @@ if args:
 
 
 # -----------------------------------------------------------------------------
-macro_regex = r"#define\s+((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF|UI_FF|INPUT_PROP)_\w+)"
+macro_regex = r'#define(?: |\t)+((?:KEY|ABS|REL|SW|MSC|LED|BTN|REP|SND|ID|EV|BUS|SYN|FF|UI_FF|INPUT_PROP)_\w+)'
 macro_regex = re.compile(macro_regex)
 
 # Uname without hostname.
