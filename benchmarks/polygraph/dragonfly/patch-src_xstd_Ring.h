
Upstream patch: lp:1380660: Make failed if gcc 4.9 is used.
https://bugs.launchpad.net/polygraph/+bug/1380660

--- src/xstd/Ring.h.orig	2014-10-23 02:22:22.000000000 +0300
+++ src/xstd/Ring.h
@@ -19,6 +19,7 @@ class Ring: protected Array<Item> {
 
 		using Array<Item>::capacity;
 		using Array<Item>::size;
+		using Array<Item>::Value;
 
 		int count() const { return theInOff - theOutOff; }
 		bool empty() const { return theInOff <= theOutOff; }
