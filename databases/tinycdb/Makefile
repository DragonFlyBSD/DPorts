# Created by: ijliao
# $FreeBSD: databases/tinycdb/Makefile 315457 2013-03-28 11:50:04Z ohauer $

PORTNAME=	tinycdb
PORTVERSION=	0.78
CATEGORIES=	databases
MASTER_SITES=	http://www.corpit.ru/mjt/tinycdb/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Analogous to cdb, but faster

USE_GMAKE=	yes
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" prefix="${PREFIX}"

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

MAN1=		cdb.1
MAN3=		cdb.3
MAN5=		cdb.5

PLIST_FILES=	bin/cdb include/cdb.h lib/libcdb.a

.include <bsd.port.mk>
