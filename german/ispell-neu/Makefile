# New ports collection makefile for:    deneu-ispell
# Date created:                         10 February 2000
# Whom:                                 Alexander Langer <alex@big.endian.de>
#
# $FreeBSD: ports/german/ispell-neu/Makefile,v 1.15 2012/11/17 05:57:59 svnexp Exp $
#

PORTNAME=	ispell
CATEGORIES=	german
PKGNAMESUFFIX=	-neu-20071211

MAINTAINER=	office@FreeBSD.org

ISPELL_DENEU=	yes
MASTERDIR=	${.CURDIR}/../../textproc/ispell
USE_PERL5=	yes

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
