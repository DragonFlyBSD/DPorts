# Created by: SADA Kenji <sada@FreeBSD.org>
# $FreeBSD: sysutils/comconsole/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	comconsole
PORTVERSION=	0.1
CATEGORIES=	sysutils
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Setup your PC to use serial port COM1 as its console device

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

NO_STAGE=	yes
do-install:
	@${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
