# Created by: SADA Kenji <sada@FreeBSD.org>
# $FreeBSD: japanese/w3m/Makefile 327737 2013-09-20 18:47:54Z bapt $

CATEGORIES=	japanese

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A pager/text-based WWW browser with Japanese support

MASTERDIR=	${.CURDIR}/../../www/w3m
PKGDIR=		${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist

OPTIONS_SLAVE=	DOCS JAPANESE
NO_DIALOG=	yes
CONFLICTS=	ja-w3m-img-0.5.* w3m-0.5.* w3m-img-0.5.*

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
