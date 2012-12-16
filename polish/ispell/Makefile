# New ports collection makefile for:    pl-ispell
# Date created:                         11 December 2003
# Whom:                                 jmz
#
# $FreeBSD: ports/polish/ispell/Makefile,v 1.2 2012/11/17 06:00:44 svnexp Exp $
#

PORTNAME=	ispell
CATEGORIES=	polish
PKGNAMESUFFIX=	-20021127

MAINTAINER=	wtp@bsdguru.org

ISPELL_PL=	yes
USE_PERL5=	yes

MASTERDIR=	${.CURDIR}/../../textproc/ispell

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include        "${MASTERDIR}/Makefile"
