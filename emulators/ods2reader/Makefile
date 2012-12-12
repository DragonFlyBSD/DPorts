# New ports collection makefile for:	ods2reader
# Date created:		21 Jan 2006
# Whom:			Jeffrey H. Johnson <CPE1704TKS@bellsouth.net>
#
# $FreeBSD: ports/emulators/ods2reader/Makefile,v 1.3 2012/11/17 05:57:22 svnexp Exp $
#

PORTNAME=	ods2reader
PORTVERSION=	19930601
CATEGORIES=	emulators sysutils
MASTER_SITES=	http://www.vsm.com.au/ftp/KITS/ \
		http://vms.process.com/ftp/vms-freeware/fileserv/ \
		http://web.infoave.net/~anonymous/VMS/
DISTNAME=	ODS-2-READER
EXTRACT_SUFX=	.ZIP

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Copies files from VMS Files-11 (ODS2) file systems

USE_ZIP=	yes
EXTRACT_BEFORE_ARGS=	-qoa
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/ods2reader

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -o ods2reader ods-2-reader.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ods2reader ${PREFIX}/bin

.include <bsd.port.mk>
