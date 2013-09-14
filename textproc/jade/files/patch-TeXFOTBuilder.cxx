$FreeBSD: textproc/jade/files/patch-TeXFOTBuilder.cxx 305337 2012-10-06 05:08:03Z kuriyama $

--- jade/TeXFOTBuilder.cxx.orig	2011-09-24 14:17:02.000000000 +0000
+++ jade/TeXFOTBuilder.cxx	2011-09-24 14:19:42.000000000 +0000
@@ -83,6 +83,8 @@
       value.convertString(nic_.placement);
       }
     ExtensionFlowObj *copy() const { return new PageFloatFlowObj(*this); }
+  public:
+    PageFloatFlowObj() {}
   private:
     PageFloatNIC nic_;
     StringC name_;
@@ -96,6 +98,8 @@
       fotb.endPageFootnote();
     }
     ExtensionFlowObj *copy() const { return new PageFootnoteFlowObj(*this); }
+  public:
+    PageFootnoteFlowObj() {}
   private:
   };
   //////////////////////////////////////////////////////////////////////
