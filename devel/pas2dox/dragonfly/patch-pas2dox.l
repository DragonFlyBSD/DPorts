--- pas2dox.l.orig	2006-02-07 11:24:39.000000000 +0200
+++ pas2dox.l
@@ -103,7 +103,7 @@ void Convert_Type(string& pText)  ///< T
   type_conv* p;
 
   string str = pText;
-  std::transform (str.begin(),str.end(), str.begin(), tolower);
+  std::transform (str.begin(),str.end(), str.begin(), ::tolower);
 
   int count = sizeof(type_conversion) / sizeof(type_conv);
 
@@ -404,7 +404,7 @@ void Convert_Op(string& pText,   ///< Op
     return;
 
   string str = pText;
-  std::transform (str.begin(),str.end(), str.begin(), tolower);
+  std::transform (str.begin(),str.end(), str.begin(), ::tolower);
 
   int count = sizeof(operator_conversion) / sizeof(op_conv);
 
@@ -1206,7 +1206,7 @@ OPER    ("."|"not"|"@"|"^"|"/"|"div"|"mo
     string str = yytext;
     string lowstr = str;
 
-    std::transform (lowstr.begin(),lowstr.end(), lowstr.begin(), tolower);
+    std::transform (lowstr.begin(),lowstr.end(), lowstr.begin(), ::tolower);
 
     int forpos = lowstr.find("for", 0);
     int dopos = lowstr.find("do", 0);
@@ -1355,7 +1355,7 @@ OPER    ("."|"not"|"@"|"^"|"/"|"div"|"mo
     str.erase(i,3);
 
     string str2 = str;
-    std::transform (str.begin(),str.end(), str2.begin(), tolower);
+    std::transform (str.begin(),str.end(), str2.begin(), ::tolower);
 
     i = str2.find("self", 0);
     if (i != string::npos)
