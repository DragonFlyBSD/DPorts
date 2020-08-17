--- src/qpdf/object_convert.cpp.orig	2020-07-25 22:39:42 UTC
+++ src/qpdf/object_convert.cpp
@@ -116,7 +116,7 @@ QPDFObjectHandle objecthandle_encode(con
         return QPDFObjectHandle::newInteger(as_int);
     } else if (py::isinstance<py::float_>(handle)) {
         auto as_double = handle.cast<double>();
-        if (! isfinite(as_double))
+        if (! std::isfinite(as_double))
             throw py::value_error("Can't convert NaN or Infinity to PDF real number");
         return QPDFObjectHandle::newReal(as_double);
     }
