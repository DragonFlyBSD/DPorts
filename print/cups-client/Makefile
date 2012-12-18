# $FreeBSD: ports/print/cups-client/Makefile,v 1.8 2012/11/17 06:00:48 svnexp Exp $

CATEGORIES=	print

MAINTAINER=	ports@FreeBSD.org

MASTERDIR?=	${.CURDIR}/../cups-base
 
CUPS_CLIENT=	yes

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
