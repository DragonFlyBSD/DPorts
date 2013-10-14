# Created by: Alonso Cárdenas Márquez <acm@FreeBSD.org>
# $FreeBSD: databases/firebird25-client/Makefile 329147 2013-10-03 06:56:20Z acm $

PORTNAME=	firebird
PORTREVISION=	2
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
