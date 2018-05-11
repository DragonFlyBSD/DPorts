--- libi2pd/TunnelBase.h.orig	2018-01-30 16:14:29.000000000 +0000
+++ libi2pd/TunnelBase.h
@@ -59,13 +59,14 @@ namespace tunnel
 
 	struct TunnelCreationTimeCmp
 	{
-		bool operator() (std::shared_ptr<const TunnelBase> t1, std::shared_ptr<const TunnelBase> t2) const
+		template<typename T>
+		bool operator() (const std::shared_ptr<T> & t1, const std::shared_ptr<T> & t2) const
 		{
 			if (t1->GetCreationTime () != t2->GetCreationTime ())
 				return t1->GetCreationTime () > t2->GetCreationTime ();
 			else
 				return t1 < t2;
-		};
+		}
 	};
 }
 }
