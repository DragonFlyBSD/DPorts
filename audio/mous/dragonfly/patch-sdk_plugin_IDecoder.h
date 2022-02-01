--- sdk/plugin/IDecoder.h.orig	2018-04-02 13:44:48 UTC
+++ sdk/plugin/IDecoder.h
@@ -27,7 +27,7 @@ public:
     virtual uint64_t UnitIndex() const = 0;
     virtual uint64_t UnitCount() const = 0;
 
-    virtual AudioMode AudioMode() const = 0;
+    virtual enum AudioMode AudioMode() const = 0;
     virtual int32_t Channels() const = 0;
     virtual int32_t BitsPerSample() const = 0;
     virtual int32_t SampleRate() const = 0;
