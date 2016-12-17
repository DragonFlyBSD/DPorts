--- src/loader/mlex.cc.orig	2004-12-22 11:26:24.000000000 +0200
+++ src/loader/mlex.cc
@@ -22,6 +22,7 @@
 
 #include<stdio.h>
 #include<iostream>
+#include <cstring> // for strcmp
 #include "mlex.h"
 using namespace std;
 #include<string>
