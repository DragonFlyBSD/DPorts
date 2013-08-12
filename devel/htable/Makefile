# Created by: Frederic Culot <frederic@culot.org>
# $FreeBSD: devel/htable/Makefile 321005 2013-06-15 16:11:19Z culot $

PORTNAME=	htable
PORTVERSION=	1.2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	culot

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Lightweight implementation of hash tables in C

USE_GMAKE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

MAN3=		htable.3
PLIST_FILES=	include/htable.h

NO_BUILD=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/src/htable.h ${PREFIX}/include
	${INSTALL_MAN} ${WRKSRC}/src/htable.3 ${MAN3PREFIX}/man/man3

regression-test:
	cd ${WRKSRC}/tst && ${GMAKE} test

.include <bsd.port.mk>
