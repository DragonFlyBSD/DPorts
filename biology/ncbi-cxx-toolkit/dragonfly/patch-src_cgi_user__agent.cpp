--- src/cgi/user_agent.cpp.orig	2017-10-18 17:48:25 UTC
+++ src/cgi/user_agent.cpp
@@ -1169,6 +1169,7 @@ void CCgiUserAgent::x_Parse(const string
         } else
         if (m_UserAgent.find(USTR("SunOS"))        != NPOS  || 
             m_UserAgent.find(USTR("Linux"))        != NPOS  ||
+            m_UserAgent.find(USTR("DragonFly"))    != NPOS  ||
             m_UserAgent.find(USTR("FreeBSD"))      != NPOS  ||
             m_UserAgent.find(USTR("NetBSD"))       != NPOS  ||
             m_UserAgent.find(USTR("OpenBSD"))      != NPOS  ||
