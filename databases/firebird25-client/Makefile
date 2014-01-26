# Created by: Alonso Cárdenas Márquez <acm@FreeBSD.org>
# $FreeBSD: databases/firebird25-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	firebird
PORTREVISION=	2
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
