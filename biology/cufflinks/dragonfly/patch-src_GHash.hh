--- src/GHash.hh.orig	2017-09-24 20:38:26 UTC
+++ src/GHash.hh
@@ -88,7 +88,7 @@ public:
                                 //nextkey is SET to the corresponding key
   GHashEntry* NextEntry() { //returns a pointer to a GHashEntry
   	 register int pos=fCurrentEntry;
-  	 while (pos<fCapacity && hash[pos].hash<0) pos++;
+  	 while (pos<fCapacity && (hash[pos].hash)<0) pos++;
   	 if (pos==fCapacity) {
   	                 fCurrentEntry=fCapacity;
   	                 return NULL;
@@ -186,7 +186,7 @@ template <class OBJ> void GHash<OBJ>::Re
         x=HASH2(h,n);
         GASSERT(1<=x && x<n);
         while(k[p].hash!=-1) p=(p+x)%n;
-        GASSERT(k[p].hash<0);
+        GASSERT((k[p].hash)<0);
         k[p]=hash[i];
         }
       }
@@ -225,7 +225,7 @@ template <class OBJ> const OBJ* GHash<OB
   GTRACE(("GHash::insert: key=\"%s\"\n",ky));
   //GMessage("GHash::insert: key=\"%s\"\n",ky);
   GASSERT(0<=i && i<fCapacity);
-  GASSERT(hash[i].hash<0);
+  GASSERT((hash[i].hash)<0);
   hash[i].hash=h;
   hash[i].mark=mrk;
   hash[i].key=Gstrdup(ky);
@@ -266,7 +266,7 @@ template <class OBJ> const OBJ* GHash<OB
   GTRACE(("GHash::insert: key=\"%s\"\n",ky));
   //GMessage("GHash::insert: key=\"%s\"\n",ky);
   GASSERT(0<=i && i<fCapacity);
-  GASSERT(hash[i].hash<0);
+  GASSERT((hash[i].hash)<0);
   hash[i].hash=h;
   hash[i].mark=mrk;
   hash[i].key=(char *)ky;
@@ -310,7 +310,7 @@ template <class OBJ>  OBJ* GHash<OBJ>::R
   if(i==-1) i=p;
   GTRACE(("GHash::replace: %08x: inserting: \"%s\"\n",this,ky));
   GASSERT(0<=i && i<fCapacity);
-  GASSERT(hash[i].hash<0);
+  GASSERT((hash[i].hash)<0);
   hash[i].hash=h;
   hash[i].mark=mrk;
   hash[i].key=Gstrdup(ky);
@@ -414,7 +414,7 @@ template <class OBJ> void GHash<OBJ>::st
 
 template <class OBJ> char* GHash<OBJ>::NextKey() {
  register int pos=fCurrentEntry;
- while (pos<fCapacity && hash[pos].hash<0) pos++;
+ while (pos<fCapacity && (hash[pos].hash)<0) pos++;
  if (pos==fCapacity) {
                  fCurrentEntry=fCapacity;
                  return NULL;
@@ -427,7 +427,7 @@ template <class OBJ> char* GHash<OBJ>::N
 
 template <class OBJ> OBJ* GHash<OBJ>::NextData() {
  register int pos=fCurrentEntry;
- while (pos<fCapacity && hash[pos].hash<0) pos++;
+ while (pos<fCapacity && (hash[pos].hash)<0) pos++;
  if (pos==fCapacity) {
                  fCurrentEntry=fCapacity;
                  return NULL;
@@ -441,7 +441,7 @@ template <class OBJ> OBJ* GHash<OBJ>::Ne
 
 template <class OBJ> OBJ* GHash<OBJ>::NextData(char* &nextkey) {
  register int pos=fCurrentEntry;
- while (pos<fCapacity && hash[pos].hash<0) pos++;
+ while (pos<fCapacity && (hash[pos].hash)<0) pos++;
  if (pos==fCapacity) {
                  fCurrentEntry=fCapacity;
                  nextkey=NULL;
