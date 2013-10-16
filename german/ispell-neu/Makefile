# Created by: Alexander Langer <alex@big.endian.de>
# $FreeBSD: german/ispell-neu/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	ispell
CATEGORIES=	german
PKGNAMESUFFIX=	-neu-20071211

MAINTAINER=	office@FreeBSD.org

ISPELL_DENEU=	yes
MASTERDIR=	${.CURDIR}/../../textproc/ispell
USES=		perl5
NO_STAGE=	yes

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
