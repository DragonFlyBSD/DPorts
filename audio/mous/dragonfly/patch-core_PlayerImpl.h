--- core/PlayerImpl.h.orig	2018-04-02 13:44:48 UTC
+++ core/PlayerImpl.h
@@ -179,8 +179,8 @@ class Player::Impl
     {
         Close();
 
-        m_DecoderMailbox.EmplaceFront(QUIT);
-        m_RendererMailbox.EmplaceFront(QUIT);
+        m_DecoderMailbox.EmplaceFront(QUIT, nullptr, std::weak_ptr<Mailbox>());
+        m_RendererMailbox.EmplaceFront(QUIT, nullptr, std::weak_ptr<Mailbox>());
 
         if (m_DecoderThread.joinable()) {
             m_DecoderThread.join();
@@ -310,7 +310,7 @@ class Player::Impl
         for (size_t i = 0; i < m_BufferCount; ++i) {
             auto ptr = m_Buffer.get() + (sizeof(UnitBuffer) + maxBytesPerUnit) * i;
             UnitBuffer* unitBuffer = reinterpret_cast<UnitBuffer*>(ptr);
-            m_BufferMailbox.EmplaceBack(0, unitBuffer);
+            m_BufferMailbox.EmplaceBack(0, unitBuffer, std::weak_ptr<Mailbox>());
         }
 
         m_UnitPerMs = (double)m_Decoder->UnitCount() / m_Decoder->Duration();
@@ -393,11 +393,11 @@ class Player::Impl
         m_UnitEnd = end;
 
         m_RendererIndex = m_UnitBeg;
-        m_RendererMailbox.EmplaceBack(PROCEED);
+        m_RendererMailbox.EmplaceBack(PROCEED, nullptr, std::weak_ptr<Mailbox>());
 
         m_DecoderIndex = m_UnitBeg;
         m_Decoder->SetUnitIndex(m_UnitBeg);
-        m_DecoderMailbox.EmplaceBack(PROCEED);
+        m_DecoderMailbox.EmplaceBack(PROCEED, nullptr, std::weak_ptr<Mailbox>());
         while (!m_BufferMailbox.Empty()) {
             auto mail = m_BufferMailbox.Take();
             std::get<TYPE>(mail) = DECODE;
@@ -413,8 +413,8 @@ class Player::Impl
             return;
         }
 
-        m_DecoderMailbox.EmplaceFront(SUSPEND);
-        m_RendererMailbox.EmplaceFront(SUSPEND);
+        m_DecoderMailbox.EmplaceFront(SUSPEND, nullptr, std::weak_ptr<Mailbox>());
+        m_RendererMailbox.EmplaceFront(SUSPEND, nullptr, std::weak_ptr<Mailbox>());
         m_BufferMailbox.Wait(m_BufferCount);
 
         m_Status = PlayerStatus::Paused;
@@ -422,11 +422,11 @@ class Player::Impl
 
     void Resume()
     {
-        m_RendererMailbox.EmplaceBack(PROCEED);
+        m_RendererMailbox.EmplaceBack(PROCEED, nullptr, std::weak_ptr<Mailbox>());
 
         m_DecoderIndex = m_RendererIndex;
         m_Decoder->SetUnitIndex(m_DecoderIndex);
-        m_DecoderMailbox.EmplaceBack(PROCEED);
+        m_DecoderMailbox.EmplaceBack(PROCEED, nullptr, std::weak_ptr<Mailbox>());
         while (!m_BufferMailbox.Empty()) {
             auto mail = m_BufferMailbox.Take();
             std::get<TYPE>(mail) = DECODE;
