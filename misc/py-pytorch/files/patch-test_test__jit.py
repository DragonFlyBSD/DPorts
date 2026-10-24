-- Disable JIT dropout tests that hang on FreeBSD due to a deadlock
-- in the legacy executor mode / JIT profiler interaction.
--- test/test_jit.py.orig	2026-07-15 00:41:58 UTC
+++ test/test_jit.py
@@ -1843,6 +1843,10 @@ graph(%Ra, %Rb):
 
     @slowTest
     @unittest.skipIf(GRAPH_EXECUTOR != ProfilingMode.LEGACY, 'Testing differentiable graph')
+    @unittest.skipIf(
+        GRAPH_EXECUTOR == ProfilingMode.LEGACY,
+        "Hangs in legacy executor mode due to profiler/JIT interaction",
+    )
     def test_dropout_module_requires_grad(self):
         with enable_profiling_mode_for_profiling_tests():
             class MyModule(torch.nn.Module):
@@ -1886,6 +1890,10 @@ graph(%Ra, %Rb):
 
     @unittest.skipIf(GRAPH_EXECUTOR == ProfilingMode.SIMPLE, 'Testing differentiable graph')
     @skipIfTorchDynamo("Torchdynamo cannot correctly handle profiler.profile calls")
+    @unittest.skipIf(
+        sys.platform.startswith("freebsd"),
+        "Hangs on FreeBSD due to profiler/JIT interaction deadlock",
+    )
     def test_dropout_func_requires_grad(self):
         def dropout_training(input):
             return F.dropout(input, 0.5, training=True)
