# Created by: Bruce M Simpson <bms@FreeBSD.org>
# $FreeBSD: devel/gdbmods/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gdbmods
PORTVERSION=	20020824
CATEGORIES=	devel
MASTER_SITES=	http://people.freebsd.org/~gallatin/
DISTFILES=	gdbmods
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Wrapper for gdb -k to provide kld symbol information

NO_BUILD=	yes
PLIST_FILES=	bin/gdbmods

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} ${PREFIX}/bin

.include <bsd.port.mk>
