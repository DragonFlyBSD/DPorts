-- Skip chat_model tests that need a working transformers import when
-- transformers cannot be imported due to dependency version mismatches in
-- the FreeBSD package set.

--- tests/unit_tests/test_chat_models.py.orig	2026-07-14 17:53:37 UTC
+++ tests/unit_tests/test_chat_models.py
@@ -42,6 +42,7 @@ def chat_hugging_face(mock_resolve_id: Any, mock_llm: 
     "langchain_huggingface.chat_models.huggingface.ChatHuggingFace._resolve_model_id"
 )
 def chat_hugging_face(mock_resolve_id: Any, mock_llm: Any) -> ChatHuggingFace:
+    pytest.importorskip("transformers")
     return ChatHuggingFace(llm=mock_llm, tokenizer=MagicMock())
 
 
