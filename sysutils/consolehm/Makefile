# Created by: Mike Muir <mmuir@es.co.nz>
# $FreeBSD: sysutils/consolehm/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	consolehm
PORTVERSION=	1.31
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	fenner

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Console based hardware monitor for FreeBSD

WRKSRC=		${WRKDIR}/consolehm/consolehm

GNU_CONFIGURE=	yes
PLIST_FILES=	bin/chm man/man8/chm.8.gz

.include <bsd.port.pre.mk>

.if ${ARCH} == "ia64" || ${ARCH} == "powerpc" || ${ARCH} == "sparc64"
BROKEN=		Does not compile on ia64, powerpc, or sparc64
.endif

.include <bsd.port.post.mk>
