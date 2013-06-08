# New ports collection makefile for:	ja-w3m
# Date Created:			8 Oct 1999
# Whom:				SADA Kenji <sada@FreeBSD.org>
#
# $FreeBSD: ports/japanese/w3m/Makefile,v 1.14 2012/11/17 05:58:40 svnexp Exp $
#

CATEGORIES=	japanese

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A pager/text-based WWW browser with Japanese support

PKGNAMEPREFIX=	ja-

MASTERDIR=	${.CURDIR}/../../www/w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

WITH_JAPANESE=	Yes
CONFLICTS=	ja-w3m-img-0.5.* w3m-0.5.* w3m-m17n-0.5.* w3m-img-0.5.* w3m-m17n-img-0.5.*

.include "${MASTERDIR}/Makefile"
