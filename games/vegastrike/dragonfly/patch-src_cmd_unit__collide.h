src/cmd/unit_collide.h: In member function 'void UnitHash3d<CTSIZ, CTACCURACY, CTHUGE>::Clear()':
src/cmd/unit_collide.h:97:32: error: request for member 'size' in '((UnitHash3d<CTSIZ, CTACCURACY, CTHUGE>*)this)->active_huge', which is of pointer type 'UnitCollection*' (maybe you meant to use '->' ?)
         if ( this->active_huge.size() )

--- src/cmd/unit_collide.h.intermediate	2018-03-02 18:59:12.000000000 +0000
+++ src/cmd/unit_collide.h
@@ -94,9 +94,9 @@ public: UnitHash3d( StarSystem *ss )
     {
         if ( !hugeobjects.empty() )
             hugeobjects.clear();
-        if ( this->active_huge.size() )
+        if ( this->active_huge->size() )
             ha.clear();
-        if ( this->accum_huge.size() )
+        if ( this->accum_huge->size() )
             hb.clear();
         acc_huge.clear();
         act_huge.clear();
