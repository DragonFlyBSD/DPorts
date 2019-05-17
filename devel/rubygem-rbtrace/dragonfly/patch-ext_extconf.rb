Ancient msgpack-1.1.0.

--- ext/extconf.rb.intermediate	2019-05-04 11:10:19 UTC
+++ ext/extconf.rb
@@ -39,6 +39,7 @@ unless File.exists?("#{CWD}/dst/#{libdir
         ENV['CC'] = '/usr/bin/gcc-4.2'
       end
       puts "  -- env CFLAGS=#{ENV['CFLAGS'].inspect} LDFLAGS=#{ENV['LDFLAGS'].inspect} CC=#{ENV['CC'].inspect}"
+      sys("sed -i '' -e '/byteswap.h/d' include/msgpack/sysdep.h")
       sys("./configure --disable-dependency-tracking --disable-shared --with-pic --prefix=#{CWD}/dst/ --libdir=#{CWD}/dst/#{libdir}")
       sys("make install")
     end
