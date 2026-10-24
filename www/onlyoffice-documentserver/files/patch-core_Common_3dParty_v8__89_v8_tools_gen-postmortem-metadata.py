--- core/Common/3dParty/v8_89/v8/tools/gen-postmortem-metadata.py.orig	2021-04-12 21:00:33 UTC
+++ core/Common/3dParty/v8_89/v8/tools/gen-postmortem-metadata.py
@@ -470,7 +470,7 @@
         #
         entries = typestr.split(',');
         for entry in entries:
-                types[re.sub('\s*=.*', '', entry).lstrip()] = True;
+                types[re.sub(r'\s*=.*', '', entry).lstrip()] = True;
         entries = torque_typestr.split('\\')
         for entry in entries:
                 types[re.sub(r' *V\(|\) *', '', entry)] = True
@@ -481,7 +481,7 @@
                     continue
                 idx = entry.find('(');
                 rest = entry[idx + 1: len(entry) - 1];
-                args = re.split('\s*,\s*', rest);
+                args = re.split(r'\s*,\s*', rest);
                 typename = args[0]
                 typeconst = args[1]
                 types[typeconst] = True
@@ -584,7 +584,7 @@
         idx = call.find('(');
         kind = call[0:idx];
         rest = call[idx + 1: len(call) - 1];
-        args = re.split('\s*,\s*', rest);
+        args = re.split(r'\s*,\s*', rest);
 
         consts = [];
 
@@ -685,7 +685,7 @@
 
         # Fix up overzealous parses.  This could be done inside the
         # parsers but as there are several, it's easiest to do it here.
-        ws = re.compile('\s+')
+        ws = re.compile(r'\s+')
         for const in consts:
                 name = ws.sub('', const['name'])
                 value = ws.sub('', str(const['value']))  # Can be a number.
