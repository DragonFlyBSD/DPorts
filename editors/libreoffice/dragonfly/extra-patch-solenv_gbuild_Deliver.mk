--- solenv/gbuild/Deliver.mk.orig	2014-02-05 15:04:15.000000000 +0000
+++ solenv/gbuild/Deliver.mk
@@ -51,7 +51,7 @@ endif
 endef
 
 define gb_Deliver__deliver
-$(if $(gb_Deliver_CLEARONDELIVER),rm -f $(2) &&) $(if $(gb_Deliver_HARDLINK),ln,cp -P -f) $(1) $(2) && touch -hr $(1) $(2)
+$(if $(gb_Deliver_CLEARONDELIVER),rm -f $(2) &&) $(if $(gb_Deliver_HARDLINK),ln,cp -P -f) $(1) $(2) && touch -r $(1) $(2)
 endef
 
 ifneq ($(strip $(gb_Deliver_GNUCOPY)),)
