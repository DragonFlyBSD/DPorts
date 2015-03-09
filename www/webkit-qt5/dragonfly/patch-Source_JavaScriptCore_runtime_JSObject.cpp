--- Source/JavaScriptCore/runtime/JSObject.cpp.orig	2014-09-11 10:48:22 UTC
+++ Source/JavaScriptCore/runtime/JSObject.cpp
@@ -1909,6 +1909,10 @@ void JSObject::putByIndexBeyondVectorLen
     }
 }
 
+template void JSObject::putByIndexBeyondVectorLengthWithoutAttributes<Int32Shape>(ExecState* exec, unsigned i, JSValue value);
+template void JSObject::putByIndexBeyondVectorLengthWithoutAttributes<DoubleShape>(ExecState* exec, unsigned i, JSValue value);
+template void JSObject::putByIndexBeyondVectorLengthWithoutAttributes<ContiguousShape>(ExecState* exec, unsigned i, JSValue value);
+
 void JSObject::putByIndexBeyondVectorLengthWithArrayStorage(ExecState* exec, unsigned i, JSValue value, bool shouldThrow, ArrayStorage* storage)
 {
     VM& vm = exec->vm();
