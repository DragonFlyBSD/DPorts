-- Fix ChatOllama._get_ls_params to honor the per-call `model` kwarg override.
--
-- langchain-tests 1.1.9 expects ls_model_name to reflect kwargs['model']
-- (e.g. from bind() or invoke(model=...)), but the 1.1.0 release always
-- used the constructor's self.model, causing test_standard_params_model_override
-- to fail.
--
-- Upstream: https://github.com/langchain-ai/langchain/tree/master/libs/partners/ollama

--- langchain_ollama/chat_models.py.orig	2026-07-14 16:31:17 UTC
+++ langchain_ollama/chat_models.py
@@ -1182,7 +1182,7 @@ class ChatOllama(BaseChatModel):
         params = self._get_invocation_params(stop=stop, **kwargs)
         ls_params = LangSmithParams(
             ls_provider="ollama",
-            ls_model_name=self.model,
+            ls_model_name=params.get("model", self.model),
             ls_model_type="chat",
             ls_temperature=params.get("temperature", self.temperature),
         )
