--- test/dynamo/test_ctx_manager.py.orig	2026-07-08 17:44:27 UTC
+++ test/dynamo/test_ctx_manager.py
@@ -179,6 +179,7 @@ class CtxManagerTests(torch._dynamo.test_case.TestCase
             opt_fn(a)
         self.assertEqual(cnts.frame_count, 2)
 
+    @unittest.skipIf(sys.platform.startswith("freebsd"), "Kineto causes SIGABRT on FreeBSD")
     def test_torch_profiler(self):
         # wrap torch.profiler.* as NullContextVariable and do nothing
         def fn(x):
@@ -199,6 +200,7 @@ class CtxManagerTests(torch._dynamo.test_case.TestCase
         self.assertTrue(same(ref, res))
         self.assertEqual(cnts.frame_count, 2)
 
+    @unittest.skipIf(sys.platform.startswith("freebsd"), "Kineto causes SIGABRT on FreeBSD")
     def test_autograd_profiler(self):
         # wrap torch.autograd.profiler.* as NullContextVariable and do nothing
         def fn(x):
@@ -219,6 +221,7 @@ class CtxManagerTests(torch._dynamo.test_case.TestCase
         self.assertTrue(same(ref, res))
         self.assertEqual(cnts.frame_count, 2)
 
+    @unittest.skipIf(sys.platform.startswith("freebsd"), "Kineto causes SIGABRT on FreeBSD")
     def test_autograd_profiler_enabled(self):
         def fn(x):
             if torch.autograd._profiler_enabled():
@@ -1722,6 +1725,7 @@ class GraphModule(torch.nn.Module):
         opt_f = torch.compile(f, backend="eager")
         opt_f(torch.randn(2, 2))
 
+    @unittest.skipIf(sys.platform.startswith("freebsd"), "Kineto causes SIGABRT on FreeBSD")
     def test_torch_profiler_use_after_with_block(self):
         counters.clear()
 
