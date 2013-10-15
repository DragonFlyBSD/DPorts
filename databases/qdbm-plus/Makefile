# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: databases/qdbm-plus/Makefile 327717 2013-09-20 16:13:47Z bapt $

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
