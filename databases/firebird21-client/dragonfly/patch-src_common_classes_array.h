--- src/common/classes/array.h.orig	2013-03-19 08:23:21.000000000 +0000
+++ src/common/classes/array.h
@@ -347,7 +347,7 @@ public:
 	size_t add(const Value& item) {
 	    size_t pos;
   	    find(KeyOfValue::generate(this, item), pos);
-		insert(pos, item);
+		this->insert(pos, item);
 		return pos;
 	}
 };
