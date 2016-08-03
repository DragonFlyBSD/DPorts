--- qcppdialogimpl.cpp.intermediate	2016-08-01 17:46:49 UTC
+++ qcppdialogimpl.cpp
@@ -928,6 +928,7 @@ void QCPPDialogImpl::setNewOptions(int b
    case 230400:
       _baud=B230400;
       break;
+#ifndef __DragonFly__
    case 460800:
       _baud=B460800;
       break;
@@ -940,6 +941,7 @@ void QCPPDialogImpl::setNewOptions(int b
 //   case 128000:
 //      _baud=B128000;
 //      break;
+#endif
    default:
 //   case 256000:
 //      _baud=B256000;
