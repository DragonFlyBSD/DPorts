--- platform/x11/detect.py.orig	2022-10-09 19:34:34.965999000 +0200
+++ platform/x11/detect.py	2022-10-09 19:35:10.765154000 +0200
@@ -338,7 +338,7 @@
         else:
             print("Warning: PulseAudio development libraries not found. Disabling the PulseAudio audio driver.")
 
-    if platform.system() in ["Linux","FreeBSD"]:
+    if platform.system() in ["Linux","DragonFly"]:
         env.Append(CPPDEFINES=["JOYDEV_ENABLED"])
         if env["udev"]:
             if os.system("pkg-config --exists libudev") == 0:  # 0 means found
@@ -393,9 +393,9 @@
     # Link those statically for portability
     if env["use_static_cpp"]:
         env.Append(LINKFLAGS=["-static-libgcc", "-static-libstdc++"])
-        if env["use_llvm"] and platform.system() != "FreeBSD":
+        if env["use_llvm"] and platform.system() != "DragonFly":
             env["LINKCOM"] = env["LINKCOM"] + " -l:libatomic.a"
 
     else:
-        if env["use_llvm"] and platform.system() != "FreeBSD":
+        if env["use_llvm"] and platform.system() != "DragonFly":
             env.Append(LIBS=["atomic"])
