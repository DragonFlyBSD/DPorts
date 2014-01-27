# Created by: Yonatan <onatan@gmail.com>
# $FreeBSD: security/dcetest/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dcetest
PORTVERSION=	1.2
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_PACKETSTORM}
MASTER_SITE_SUBDIR=	UNIX/scanners

MAINTAINER=	onatan@gmail.com
COMMENT=	Utility to dump MSRPC endpoint information from Windows systems

ALL_TARGET=	dcetest
MAKE_ARGS=	CC="${CC}"
WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/dcetest

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dcetest ${PREFIX}/bin

.include <bsd.port.mk>
