--- test/misc.jl.orig	2016-09-20 05:54:22.000000000 +0300
+++ test/misc.jl
@@ -217,6 +217,7 @@ end
 @test !Base.is_apple(:Windows)
 @test Base.is_unix(:Darwin)
 @test Base.is_unix(:FreeBSD)
+@test Base.is_unix(:DragonFly)
 @test_throws ArgumentError Base.is_unix(:BeOS)
 if !is_windows()
     @test Sys.windows_version() === (0, 0)
