# Created by: Alexander Langer <alex@big.endian.de>
# $FreeBSD: german/ispell/Makefile 326956 2013-09-11 09:36:43Z az $

PORTNAME=	ispell
CATEGORIES=	german
PKGNAMESUFFIX=	-20071211

MAINTAINER=	office@FreeBSD.org

USES=		perl5

ISPELL_DEALT=	yes
ISPELL_DENEU=	yes
MASTERDIR=	${.CURDIR}/../../textproc/ispell

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
