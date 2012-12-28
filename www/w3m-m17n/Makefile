# New ports collection makefile for:   w3m-m17n
# Date Created:                08 October 2001
# Whom:                        MANTANI Nobutaka <nobutaka@nobutaka.com>
#
# $FreeBSD: ports/www/w3m-m17n/Makefile,v 1.8 2012/11/17 06:03:10 svnexp Exp $
#

PKGNAMESUFFIX=	-m17n

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A pager/text-based WWW browser with multilingualization support

MASTERDIR=	${.CURDIR}/../w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

WITH_M17N=	yes
CONFLICTS=	ja-w3m-0.5.* ja-w3m-img-0.5.* w3m-0.5.* w3m-img-0.5.* w3m-m17n-img-0.5.*

.include "${MASTERDIR}/Makefile"
