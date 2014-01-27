# Created by: Max Kochubey <root@hangover.org.ru>
# $FreeBSD: databases/firebird21-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	firebird
PORTREVISION=	1
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird21-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
