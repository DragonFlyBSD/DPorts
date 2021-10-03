--- spec/unit/templates/domain_spec.rb.orig	2021-10-03 14:59:04 UTC
+++ spec/unit/templates/domain_spec.rb
@@ -36,7 +36,7 @@ describe 'templates/domain' do
     before do
       domain.title = 'title'
       domain.description = 'description'
-      domain.instance_variable_set('@domain_type', 'kvm')
+      domain.instance_variable_set('@domain_type', 'nvmm')
       domain.cpu_mode = 'custom'
       domain.cpu_feature(name: 'AAA', policy: 'required')
       domain.hyperv_feature(name: 'BBB', state: 'on')
