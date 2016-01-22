--- src/engine/shader.cpp.orig	2015-07-18 05:54:17.000000000 +0300
+++ src/engine/shader.cpp
@@ -717,6 +717,8 @@ static void gendynlightvariant(Shader &s
     int numlights = minimizedynlighttcusage() ? 1 : MAXDYNLIGHTS;
 
     const char *vspragma = strstr(vs, "#pragma CUBE2_dynlight"), *pspragma = strstr(ps, "#pragma CUBE2_dynlight");
+    if(!vspragma || !pspragma) return;
+
     string pslight;
     vspragma += strcspn(vspragma, "\n");
     if(*vspragma) vspragma++;
@@ -783,6 +785,8 @@ static void gendynlightvariant(Shader &s
 static void genshadowmapvariant(Shader &s, const char *sname, const char *vs, const char *ps, int row = 1)
 {
     const char *vspragma = strstr(vs, "#pragma CUBE2_shadowmap"), *pspragma = strstr(ps, "#pragma CUBE2_shadowmap");
+    if(!vspragma || !pspragma) return;
+
     string pslight;
     vspragma += strcspn(vspragma, "\n");
     if(*vspragma) vspragma++;
@@ -1177,7 +1181,7 @@ const char *getshaderparamname(const cha
 {
     const char *exists = shaderparamnames.find(name, NULL);
     if(exists || !insert) return exists;
-    return shaderparamnames.add(newstring(name));
+    return shaderparamnames.add<const char *>(newstring(name));
 }
 
 void addslotparam(const char *name, float x, float y, float z, float w, int palette = 0, int palindex = 0)
