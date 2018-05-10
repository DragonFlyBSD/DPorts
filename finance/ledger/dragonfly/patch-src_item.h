--- src/item.h.orig	2016-01-11 15:59:38.000000000 +0000
+++ src/item.h
@@ -92,7 +92,7 @@ public:
 
   typedef std::pair<optional<value_t>, bool> tag_data_t;
   typedef std::map<string, tag_data_t,
-                   function<bool(string, string)> > string_map;
+                   std::function<bool(string, string)> > string_map;
 
   state_t              _state;
   optional<date_t>     _date;
