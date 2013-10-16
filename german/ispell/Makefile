# Created by: Alexander Langer <alex@big.endian.de>
# $FreeBSD: german/ispell/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	ispell
CATEGORIES=	german
PKGNAMESUFFIX=	-20071211

MAINTAINER=	office@FreeBSD.org

USES=		perl5

ISPELL_DEALT=	yes
ISPELL_DENEU=	yes
MASTERDIR=	${.CURDIR}/../../textproc/ispell
NO_STAGE=	yes

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
