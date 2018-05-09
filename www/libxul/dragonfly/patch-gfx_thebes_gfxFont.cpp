Even if deprecated (EXPIRATION_DATE=2018-06-20)
Explicitly instantiate gfxFont::GetShapedWord<uint8_t> for its use in gfxTextRun.cpp
https://hg.mozilla.org/mozilla-central/rev/97dae871389b

--- gfx/thebes/gfxFont.cpp.intermediate	2018-03-14 16:13:13.000000000 +0000
+++ gfx/thebes/gfxFont.cpp
@@ -2487,6 +2487,17 @@ gfxFont::GetShapedWord(gfxContext *aCont
     return sw;
 }
 
+template gfxShapedWord*
+gfxFont::GetShapedWord(gfxContext *aContext,
+                       const uint8_t *aText,
+                       uint32_t    aLength,
+                       uint32_t    aHash,
+                       int32_t     aRunScript,
+                       bool        aVertical,
+                       int32_t     aAppUnitsPerDevUnit,
+                       uint32_t    aFlags,
+                       gfxTextPerfMetrics *aTextPerf);
+
 bool
 gfxFont::CacheHashEntry::KeyEquals(const KeyTypePointer aKey) const
 {
