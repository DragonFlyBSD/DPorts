Seems to work, dunno

--- protolib/include/protoTree.h.orig	2014-06-05 00:12:02.000000000 +0000
+++ protolib/include/protoTree.h
@@ -648,12 +648,12 @@ class ProtoSortedTreeTemplate : public P
                 
                 ITEM_TYPE* GetPrevItem()
                     {return static_cast<ITEM_TYPE*>(ProtoSortedTree::Iterator::GetPrevItem());}
-                ITEM_TYPE* PeekPrevItem() const
+                ITEM_TYPE* PeekPrevItem()
                     {return static_cast<ITEM_TYPE*>(ProtoSortedTree::Iterator::PeekPrevItem());}
                 
                 ITEM_TYPE* GetNextItem()
                     {return static_cast<ITEM_TYPE*>(ProtoSortedTree::Iterator::GetNextItem());}
-                ITEM_TYPE* PeekNextItem() const
+                ITEM_TYPE* PeekNextItem()
                     {return static_cast<ITEM_TYPE*>(ProtoSortedTree::Iterator::PeekNextItem());}
 
         };  // end class ProtoSortedTreeTemplate::Iterator
