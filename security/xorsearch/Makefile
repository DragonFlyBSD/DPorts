# Created by: Edwin Groothuis <edwin@mavetju.org>
# $FreeBSD: security/xorsearch/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xorsearch
PORTVERSION=	1.2.0
CATEGORIES=	security textproc
MASTER_SITES=	http://www.didierstevens.com/files/software/
DISTNAME=	XORSearch_V1_2_0

MAINTAINER=	edwin@mavetju.org
COMMENT=	Search for a given string in an XOR or ROL encoded binary file

USE_ZIP=	yes
WRKSRC=		${WRKDIR}

PLIST_FILES=	bin/xorsearch

NO_STAGE=	yes
do-build:
	${CC} -o ${WRKDIR}/XORSearch ${WRKDIR}/XORSearch.c

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/XORSearch ${PREFIX}/bin/xorsearch

.include <bsd.port.mk>
