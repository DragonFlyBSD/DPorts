$NetBSD$

Add a custom pkgsrc install target.
--- build/packaging.rb.orig	2012-02-03 22:25:41.000000000 +0000
+++ build/packaging.rb
@@ -185,3 +185,72 @@ task 'package:debian' => 'package:check'
 	
 	sh "debuild"
 end
+
+desc "Install into pkgsrc world (DESTDIR compatible)"
+task :pkgsrc => [:agents] + Packaging::ASCII_DOCS do
+        require 'rbconfig'
+        require 'fileutils'
+        include Config
+        destdir = ENV['DESTDIR'].nil? ? '' : ENV['DESTDIR']
+        prefix = ENV['PREFIX']
+        
+        fake_libdir = "#{destdir}/@RUBY_VENDORLIB@"
+        fake_native_support_dir = "#{destdir}/@RUBY_VENDORARCHLIB@"
+        fake_agents_dir = "#{destdir}#{NATIVELY_PACKAGED_AGENTS_DIR}"
+        fake_helper_scripts_dir = "#{destdir}#{NATIVELY_PACKAGED_HELPER_SCRIPTS_DIR}"
+        fake_docdir = "#{destdir}#{NATIVELY_PACKAGED_DOCDIR}"
+        fake_bindir = "#{destdir}#{prefix}/bin"
+        fake_sbindir = "#{destdir}#{prefix}/sbin"
+        fake_source_root = "#{destdir}#{NATIVELY_PACKAGED_SOURCE_ROOT}"
+        fake_resources_dir = "#{destdir}#{prefix}/share/phusion-passenger"
+        
+        sh "rm -rf #{destdir}"
+        sh "mkdir -p #{destdir}"
+        
+        sh "mkdir -p #{fake_libdir}"
+        sh "cp #{LIBDIR}/phusion_passenger.rb #{fake_libdir}/"
+        sh "cp -R #{LIBDIR}/phusion_passenger #{fake_libdir}/"
+        
+        sh "mkdir -p #{fake_native_support_dir}"
+        native_support_archdir = PlatformInfo.ruby_extension_binary_compatibility_ids.join("-")
+        sh "mkdir -p #{fake_native_support_dir}"
+        sh "cp -R ext/ruby/#{native_support_archdir}/*.#{LIBEXT} #{fake_native_support_dir}/"
+        
+        sh "mkdir -p #{fake_agents_dir}"
+        sh "cp -R #{AGENTS_DIR}/* #{fake_agents_dir}/"
+        sh "rm -rf #{fake_agents_dir}/*.dSYM"
+        sh "rm -rf #{fake_agents_dir}/*/*.dSYM"
+        
+        sh "mkdir -p #{fake_helper_scripts_dir}"
+        sh "cp -R #{HELPER_SCRIPTS_DIR}/* #{fake_helper_scripts_dir}/"
+        
+        sh "mkdir -p #{fake_docdir}"
+        Packaging::ASCII_DOCS.each do |docfile|
+                sh "cp", docfile, "#{fake_docdir}/"
+        end
+        sh "cp -R doc/images #{fake_docdir}/"
+        
+        sh "mkdir -p #{fake_bindir}"
+        Packaging::USER_EXECUTABLES.each do |exe|
+                sh "cp bin/#{exe} #{fake_bindir}/"
+        end
+        
+        sh "mkdir -p #{fake_sbindir}"
+        Packaging::SUPER_USER_EXECUTABLES.each do |exe|
+                sh "cp bin/#{exe} #{fake_sbindir}/"
+        end
+        
+        sh "mkdir -p #{fake_resources_dir}"
+        sh "cp resources/* #{fake_resources_dir}/"
+        
+        sh "mkdir -p #{fake_source_root}"
+        spec.files.each do |filename|
+                next if File.directory?(filename)
+                dirname = File.dirname(filename)
+                if !File.directory?("#{fake_source_root}/#{dirname}")
+                        sh "mkdir -p '#{fake_source_root}/#{dirname}'"
+                end
+                puts "cp '#{filename}' '#{fake_source_root}/#{dirname}/'"
+                FileUtils.cp(filename, "#{fake_source_root}/#{dirname}/")
+        end
+end
