--- xbmc/cores/DllLoader/exports/util/EmuFileWrapper.cpp.orig	2017-11-14 17:55:01.000000000 +0100
+++ xbmc/cores/DllLoader/exports/util/EmuFileWrapper.cpp	2018-08-04 19:01:18.077608000 +0200
@@ -39,7 +39,7 @@ constexpr bool isValidFilePtr(FILE* f)
 }
 
 #else
-constexpr FILE* FileDescriptor(FILE& f)
+constexpr struct __FILE_public* FileDescriptor(struct __FILE_public& f)
 {
   return &f;
 }
@@ -150,7 +150,7 @@ void CEmuFileWrapper::UnRegisterFileObje
 {
   if (isValidFilePtr(stream))
   {
-    return UnRegisterFileObjectByDescriptor(FileDescriptor(*stream)->_file);
+    return UnRegisterFileObjectByDescriptor(FileDescriptor(*(struct __FILE_public *)stream)->_file);
   }
 }
 
@@ -208,7 +208,7 @@ EmuFileObject* CEmuFileWrapper::GetFileO
 {
   if (isValidFilePtr(stream))
   {
-    return GetFileObjectByDescriptor(FileDescriptor(*stream)->_file);
+    return GetFileObjectByDescriptor(FileDescriptor(*(struct __FILE_public *)stream)->_file);
   }
 
   return nullptr;
@@ -228,7 +228,7 @@ XFILE::CFile* CEmuFileWrapper::GetFileXb
 {
   if (isValidFilePtr(stream))
   {
-    auto object = GetFileObjectByDescriptor(FileDescriptor(*stream)->_file);
+    auto object = GetFileObjectByDescriptor(FileDescriptor(*(struct __FILE_public *)stream)->_file);
     if (object != nullptr && object->used)
     {
       return object->file_xbmc;
@@ -241,7 +241,7 @@ int CEmuFileWrapper::GetDescriptorByStre
 {
   if (isValidFilePtr(stream))
   {
-    int i = FileDescriptor(*stream)->_file - FILE_WRAPPER_OFFSET;
+    int i = FileDescriptor(*(struct __FILE_public *)stream)->_file - FILE_WRAPPER_OFFSET;
     if (i >= 0 && i < MAX_EMULATED_FILES)
     {
       return i + FILE_WRAPPER_OFFSET;
@@ -255,7 +255,7 @@ FILE* CEmuFileWrapper::GetStreamByDescri
   auto object = GetFileObjectByDescriptor(fd);
   if (object != nullptr && object->used)
   {
-    return &object->file_emu;
+    return (FILE *)&object->file_emu;
   }
   return nullptr;
 }
@@ -264,7 +264,7 @@ bool CEmuFileWrapper::StreamIsEmulatedFi
 {
   if (isValidFilePtr(stream))
   {
-    return DescriptorIsEmulatedFile(FileDescriptor(*stream)->_file);
+    return DescriptorIsEmulatedFile(FileDescriptor(*(struct __FILE_public *)stream)->_file);
   }
   return false;
 }
