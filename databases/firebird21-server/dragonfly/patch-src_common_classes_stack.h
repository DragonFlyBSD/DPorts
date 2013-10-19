--- src/common/classes/stack.h.orig	2013-03-19 08:23:21.000000000 +0000
+++ src/common/classes/stack.h
@@ -48,7 +48,7 @@ namespace Firebird {
 			Entry(Object e, Entry* stk) 
 				: inherited(), next(stk) 
 			{
-				add(e);
+				this->add(e);
 			}
 			
 			Entry(Entry* stk) : inherited(), next(stk) { }
@@ -62,7 +62,7 @@ namespace Firebird {
 			{
 				if (inherited::getCount() < this->getCapacity())
 				{
-					add(e);
+					this->add(e);
 					return this;
 				}
 				Entry* newEntry = FB_NEW(p) Entry(e, this);
