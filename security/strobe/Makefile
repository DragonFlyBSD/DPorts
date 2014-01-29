# Created by: proff
# $FreeBSD: security/strobe/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	strobe
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://ftp.ussg.iu.edu/security/tools/unix/scanners/strobe/ \
		http://ftp.cerias.purdue.edu/pub/tools/unix/scanners/strobe/ \
		http://ftp.surfnet.nl/security/coast/scanners/strobe/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast scatter/gather TCP port scanner

WRKSRC=		${WRKDIR}/strobe
ALL_TARGET=	strobe
MAN1=		strobe.1

PLIST_FILES=	bin/strobe lib/strobe.services

NO_STAGE=	yes
.include <bsd.port.mk>
