# Created by: Alexander Langer <alex@big.endian.de>
# $FreeBSD: german/ispell-neu/Makefile 326956 2013-09-11 09:36:43Z az $

PORTNAME=	ispell
CATEGORIES=	german
PKGNAMESUFFIX=	-neu-20071211

MAINTAINER=	office@FreeBSD.org

ISPELL_DENEU=	yes
MASTERDIR=	${.CURDIR}/../../textproc/ispell
USES=		perl5

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
