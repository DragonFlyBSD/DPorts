--- lib/vagrant-libvirt/config.rb.orig	2021-10-03 14:59:04 UTC
+++ lib/vagrant-libvirt/config.rb
@@ -720,7 +720,7 @@ module VagrantPlugins
         # Setup connection uri.
         uri = @driver.dup
         virt_path = case uri
-                    when 'qemu', 'kvm'
+                    when 'qemu', 'kvm', 'nvmm'
                       qemu_use_session ? '/session' : '/system'
                     when 'openvz', 'uml', 'phyp', 'parallels'
                       '/system'
@@ -731,7 +731,7 @@ module VagrantPlugins
                     else
                       raise "Require specify driver #{uri}"
         end
-        if uri == 'kvm'
+        if uri == 'nvmm'
           uri = 'qemu' # use QEMU uri for KVM domain type
         end
 
@@ -778,7 +778,7 @@ module VagrantPlugins
         _default_uri if @uri == UNSET_VALUE
 
         # settings which _generate_uri
-        @driver = 'kvm' if @driver == UNSET_VALUE
+        @driver = 'nvmm' if @driver == UNSET_VALUE
         @password = nil if @password == UNSET_VALUE
         @socket = nil if @socket == UNSET_VALUE
 
