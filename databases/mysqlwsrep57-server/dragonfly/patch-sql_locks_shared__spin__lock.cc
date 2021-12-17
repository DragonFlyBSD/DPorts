--- sql/locks/shared_spin_lock.cc.intermediate	2021-12-16 22:34:27.000000000 +0000
+++ sql/locks/shared_spin_lock.cc
@@ -239,7 +239,7 @@ lock::Shared_spin_lock &lock::Shared_spi
   {
     this->spin_exclusive_lock();
   }
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   my_atomic_store64(&this->m_exclusive_owner, reinterpret_cast<int64>(self));
 #else
   my_atomic_store64(&this->m_exclusive_owner, self);
