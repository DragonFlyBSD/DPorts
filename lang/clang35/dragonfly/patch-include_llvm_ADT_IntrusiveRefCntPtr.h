--- include/llvm/ADT/IntrusiveRefCntPtr.h.orig	2014-07-05 22:20:59 UTC
+++ include/llvm/ADT/IntrusiveRefCntPtr.h
@@ -197,6 +197,8 @@ public:
   private:
     void retain() { if (Obj) IntrusiveRefCntPtrInfo<T>::retain(Obj); }
     void release() { if (Obj) IntrusiveRefCntPtrInfo<T>::release(Obj); }
+    template <typename X>
+    friend class IntrusiveRefCntPtr;
   };
 
   template<class T, class U>
