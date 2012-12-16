# New ports collection makefile for:    de-ispell
# Date created:                         10 February 2000
# Whom:                                 Alexander Langer <alex@big.endian.de>
#
# $FreeBSD: ports/german/ispell/Makefile,v 1.17 2012/11/17 05:57:59 svnexp Exp $
#

PORTNAME=	ispell
CATEGORIES=	german
PKGNAMESUFFIX=	-20071211

MAINTAINER=	office@FreeBSD.org

USE_PERL5=	yes

ISPELL_DEALT=	yes
ISPELL_DENEU=	yes
MASTERDIR=	${.CURDIR}/../../textproc/ispell

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
