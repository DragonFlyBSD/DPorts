# New ports collection makefile for: comconsole
# Date created:		27 Dec 1998
# Whom:			SADA Kenji <sada@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/comconsole/Makefile,v 1.11 2012/11/17 06:01:27 svnexp Exp $
#

PORTNAME=	comconsole
PORTVERSION=	0.1
CATEGORIES=	sysutils
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Setup your PC to use serial port COM1 as its console device

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
