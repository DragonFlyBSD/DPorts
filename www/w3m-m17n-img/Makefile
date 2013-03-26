# New ports collection makefile for:   w3m-m17n
# Date Created:                11 January 2004
# Whom:                        MANTANI Nobutaka <nobutaka@FreeBSD.org>
#
# $FreeBSD: ports/www/w3m-m17n-img/Makefile,v 1.4 2012/11/17 06:03:10 svnexp Exp $
#

PKGNAMESUFFIX=	-m17n-img

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A pager/text-based WWW browser with m17n and inline image support

MASTERDIR=	${.CURDIR}/../../www/w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

WITH_M17N=		yes
WITH_INLINE_IMAGE=	yes
CONFLICTS=	ja-w3m-0.5.* ja-w3m-img-0.5.* w3m-0.5.* w3m-m17n-0.5.* w3m-img-0.5.*

.include "${MASTERDIR}/Makefile"
