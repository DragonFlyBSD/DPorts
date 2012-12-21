 $FreeBSD: ports/editors/ted/files/patch-appUtil::utilPrinter.c,v 1.2 2012/11/17 05:57:18 svnexp Exp $
 
 --- appUtil/utilPrinter.c	Sun Aug 17 19:14:01 2003
 +++ appUtil/utilPrinter.c	Sun Aug 17 19:15:54 2003
 @@ -281,14 +281,14 @@
      /*  1  */
      if  ( count == 0 )
  	{
 -	utilPrinterGetLprPrinters(  "( lpc status ) 2>/dev/null",
 +	utilPrinterGetLprPrinters(  "( lpc status all) 2>/dev/null",
  						&defaultPrinter, &count, &pd );
  	}
  
      /*  1b  */
      if  ( count == 0 )
  	{
 -	utilPrinterGetLprPrinters(  "( /usr/sbin/lpc status ) 2>/dev/null",
 +	utilPrinterGetLprPrinters(  "( /usr/sbin/lpc status all) 2>/dev/null",
  						&defaultPrinter, &count, &pd );
  	}
