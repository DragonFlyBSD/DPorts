# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: databases/qdbm-plus/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	0
PKGNAMESUFFIX=	-plus

COMMENT=	C++ API for QDBM

SLAVEPORT=	plus

MASTERDIR=	${.CURDIR}/../../databases/qdbm
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/plus
PLIST=		${.CURDIR}/pkg-plist
DESCR=		${.CURDIR}/pkg-descr
PATCHDIR=	${.CURDIR}/files

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
