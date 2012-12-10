# New ports collection makefile for: scan_ffs
# Date created:         20040112
# Whom:                 mranner@inode.at
#
# $FreeBSD: ports/sysutils/scan_ffs/Makefile,v 1.7 2012/11/17 06:01:45 svnexp Exp $
#

PORTNAME=	scan_ffs
PORTVERSION=	1.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.ranner.eu/stuff/

MAINTAINER=	michael@ranner.eu
COMMENT=	Scan_ffs recovers lost disklabel

USE_BZIP2=	yes

MAN8=		scan_ffs.8
PLIST_FILES=	sbin/scan_ffs

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/scan_ffs ${PREFIX}/sbin/.
	${INSTALL_MAN} ${WRKSRC}/scan_ffs.8 ${MAN8PREFIX}/man/man8/.

.include <bsd.port.mk>
