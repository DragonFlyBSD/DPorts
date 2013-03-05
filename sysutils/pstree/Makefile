# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: sysutils/pstree/Makefile 313114 2013-02-28 17:05:01Z culot $

PORTNAME=	pstree
PORTVERSION=	2.35
CATEGORIES=	sysutils
MASTER_SITES=	http://www.thp.uni-due.de/pstree/ \
		LOCAL/avl
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	List processes as a tree

NO_WRKSUBDIR=	yes

CONFLICTS=	psmisc-[0-9]*

PLIST_FILES=	bin/pstree

do-build:
	cd ${WRKDIR} && ${CC} ${CFLAGS} -o pstree pstree.c

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/pstree ${PREFIX}/bin

.include <bsd.port.mk>
