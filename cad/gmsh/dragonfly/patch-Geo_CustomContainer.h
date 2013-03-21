--- Geo/CustomContainer.h.intermediate	2013-03-21 09:51:00.225174000 +0000
+++ Geo/CustomContainer.h
@@ -560,7 +560,7 @@ class FaceVector : public FaceAllocator<
   }
 
   // Destructor
-  ~FaceVector() { deallocate(_capacity, faces); }
+  ~FaceVector() { this->deallocate(_capacity, faces); }
 
   // Index the vector
   const T &operator[](const int i) const { return faces[i]; }
@@ -569,14 +569,14 @@ class FaceVector : public FaceAllocator<
   // Add element to end
   T &push_back(const T val)
   {
-    if(_size == _capacity) grow(_capacity, faces);
+    if(_size == _capacity) this->grow(_capacity, faces);
     return faces[_size++] = val;
   }
 
   // Just increment the size (push an empty element)
   T &push_empty()
   {
-    if(_size == _capacity) grow(_capacity, faces);
+    if(_size == _capacity) this->grow(_capacity, faces);
     return faces[_size++];
   }
 
