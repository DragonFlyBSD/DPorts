# Created by: ijliao
# $FreeBSD: databases/tinycdb/Makefile 327717 2013-09-20 16:13:47Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
