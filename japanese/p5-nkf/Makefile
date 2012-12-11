# New ports collection makefile for:	p5-nkf
# Date created:		23 Feb 2000
# Whom:			max
#
# $FreeBSD: ports/japanese/p5-nkf/Makefile,v 1.20 2012/11/17 05:58:38 svnexp Exp $
#

CATEGORIES=	japanese perl5
PKGNAMEPREFIX=	ja-p5-

COMMENT=	A perl extension module to use NKF

DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

PERL_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/NKF.mod
PATCHDIR=	${.CURDIR}/files
MAN3=		NKF.3

MASTERDIR=	${.CURDIR}/../nkf

.include "${MASTERDIR}/Makefile"
