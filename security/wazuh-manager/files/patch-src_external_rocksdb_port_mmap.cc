--- src/external/rocksdb/port/mmap.cc	2026-07-11 11:34:41.901583000 -0700
+++ src/external/rocksdb/port/mmap.cc	2026-07-11 11:36:41.717675000 -0700
@@ -43,7 +43,7 @@
     return *this;
   }
   this->~MemMapping();
-  std::memcpy(this, &other, sizeof(*this));
+  std::memcpy(static_cast<void*>(this), &other, sizeof(*this));
   new (&other) MemMapping();
   return *this;
 }
