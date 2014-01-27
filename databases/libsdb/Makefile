# Created by: ijliao
# $FreeBSD: databases/libsdb/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libsdb
PORTVERSION=	0.10.0
CATEGORIES=	databases
MASTER_SITES=	ftp://siag.nu/pub/libsdb/ \
		http://siag.nu/pub/libsdb/
DISTNAME=	sdb-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple database library

MAKE_JOBS_UNSAFE=	yes

HAS_CONFIGURE=	yes
MAKE_ARGS=	PREFIX="${PREFIX}" CC="${CC}" CFLAGS="${CFLAGS}"
USE_LDCONFIG=	yes

MAN3=		sdb.3 sdb_init.3 sdb_open.3 sdb_close.3 sdb_query.3
MAN8=		sdbd.8

PLIST_SUB=	VERSION="${PORTVERSION}"

NO_STAGE=	yes
.include <bsd.port.mk>
