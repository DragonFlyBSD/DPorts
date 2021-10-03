--- spec/unit/config_spec.rb.orig	2021-10-03 14:59:04 UTC
+++ spec/unit/config_spec.rb
@@ -215,6 +215,10 @@ describe VagrantPlugins::ProviderLibvirt
           {:driver => 'kvm'},
           {:uri => "qemu:///system"},
         ],
+        [ # set to nvmm only
+          {:driver => 'nvmm'},
+          {:uri => "qemu:///system"},
+        ],
         [ # set to qemu only
           {:driver => 'qemu'},
           {:uri => "qemu:///system"},
