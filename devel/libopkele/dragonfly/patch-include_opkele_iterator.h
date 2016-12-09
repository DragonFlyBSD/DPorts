Turns out this is just wrong.
The things i learn about c++ as i go..

--- include/opkele/iterator.h.orig	2009-08-31 14:57:35.000000000 +0300
+++ include/opkele/iterator.h
@@ -159,11 +159,13 @@ namespace opkele {
 			if(!found) empty=true;
 			return *this;
 		    }
+#if 0
 		    basic_filterator<IT> operator++(int) {
 			basic_filterator<IT> rv(*this);
 			++(*this);
 			return rv;
 		    }
+#endif
 
 		    void prepare() {
 			bool found = false;
