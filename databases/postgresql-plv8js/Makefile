# Created by: vanilla@
# $FreeBSD: databases/postgresql-plv8js/Makefile 328230 2013-09-25 01:19:21Z vanilla $

PORTNAME=	plv8js
PORTVERSION=	1.4.1
CATEGORIES=	databases
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	postgresql-
DISTNAME=	plv8-${PORTVERSION}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	PL/v8js procedural language for PostgreSQL database

LIB_DEPENDS+=	libv8.so:${PORTSDIR}/lang/v8

USES=		gmake perl5
USE_PERL5=	build
USE_ZIP=	yes
USE_PGSQL=	yes
WANT_PGSQL_VER=	91+
PLIST_SUB+=	PORTVERSION="${PORTVERSION}"

.include <bsd.port.mk>
