--- lib/vagrant-libvirt/action/package_domain.rb.orig	2021-10-03 14:59:04 UTC
+++ lib/vagrant-libvirt/action/package_domain.rb
@@ -92,7 +92,7 @@ module VagrantPlugins
           <<-EOF
             Vagrant.configure("2") do |config|
               config.vm.provider :libvirt do |libvirt|
-                libvirt.driver = "kvm"
+                libvirt.driver = "nvmm"
                 libvirt.host = ""
                 libvirt.connect_via_ssh = false
                 libvirt.storage_pool_name = "default"
