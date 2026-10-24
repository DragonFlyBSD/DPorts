--- setup.py.orig	2026-09-10 06:09:41 UTC
+++ setup.py
@@ -443,7 +443,7 @@
     libs.extend(["libonnxruntime_providers_vitisai.dylib"])
     if nightly_build:
         libs.extend(["libonnxruntime_pywrapper.dylib"])
-elif platform.system() == "FreeBSD":
+elif platform.system() in ("FreeBSD", "DragonFly"):
     libs = [
         "onnxruntime_pybind11_state.so",
         "libonnxruntime_providers_shared.so",
