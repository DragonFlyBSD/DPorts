-- Skip pipeline tests when transformers cannot be imported because the
-- tokenizers package in FreeBSD is newer than the narrow range transformers
-- declares.

--- tests/unit_tests/test_huggingface_pipeline.py.orig	2026-07-14 17:53:26 UTC
+++ tests/unit_tests/test_huggingface_pipeline.py
@@ -1,5 +1,9 @@ from unittest.mock import MagicMock, patch
 from unittest.mock import MagicMock, patch
 
+import pytest
+
+pytest.importorskip("transformers")
+
 from langchain_huggingface import HuggingFacePipeline
 
 DEFAULT_MODEL_ID = "gpt2"
