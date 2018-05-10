Explicitly instantiate gfxFont::GetShapedWord<uint8_t> for its use in gfxTextRun.cpp
https://hg.mozilla.org/mozilla-central/rev/97dae871389b

--- gfx/thebes/gfxFont.cpp.orig
+++ gfx/thebes/gfxFont.cpp
@@ -2634,16 +2634,27 @@ gfxFont::GetShapedWord(DrawTarget *aDraw
         ShapeText(aDrawTarget, aText, 0, aLength, aRunScript, aVertical,
                   aRounding, sw);
 
     NS_WARNING_ASSERTION(ok, "failed to shape word - expect garbled text");
 
     return sw;
 }
 
+template gfxShapedWord*
+gfxFont::GetShapedWord(DrawTarget *aDrawTarget,
+                       const uint8_t *aText,
+                       uint32_t    aLength,
+                       uint32_t    aHash,
+                       Script      aRunScript,
+                       bool        aVertical,
+                       int32_t     aAppUnitsPerDevUnit,
+                       uint32_t    aFlags,
+                       gfxTextPerfMetrics *aTextPerf);
+
 bool
 gfxFont::CacheHashEntry::KeyEquals(const KeyTypePointer aKey) const
 {
     const gfxShapedWord* sw = mShapedWord.get();
     if (!sw) {
         return false;
     }
     if (sw->GetLength() != aKey->mLength ||




