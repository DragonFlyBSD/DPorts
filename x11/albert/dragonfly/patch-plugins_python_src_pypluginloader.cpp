--- plugins/python/src/pypluginloader.cpp.orig
+++ plugins/python/src/pypluginloader.cpp
@@ -68,7 +68,7 @@
     if(QFile file(source_path_); file.open(QIODevice::ReadOnly))
         source = QTextStream(&file).readAll();
     else
-        throw runtime_error(format("Can't open source file: {}", file.fileName().toStdString()));
+        throw runtime_error("Can't open source file: " + file.fileName().toStdString());
 
     //Parse the source code using ast and get all FunctionDef and Assign ast nodes
     py::gil_scoped_acquire acquire;
