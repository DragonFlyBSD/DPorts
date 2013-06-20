# New ports collection makefile for:	zh-joe
# Date created:			3 July 1999
# Whom:				Shen Chuan-Hsing <statue@mail.elife.idv.tw>
#
# $FreeBSD: ports/chinese/joe/Makefile,v 1.28 2012/11/17 05:54:57 svnexp Exp $
#

PORTREVISION=	1
CATEGORIES=	chinese

PATCH_SITES=	${MASTER_SITE_LOCAL}
PATCH_SITE_SUBDIR=	chinsan/patch
PATCHFILES=	zh-joe-3.7.diff
PATCH_DIST_STRIP=	-p1

MAINTAINER=	ports@FreeBSD.org

LATEST_LINK=	${PKGNAMEPREFIX}joe

MASTERDIR=	${.CURDIR}/../../editors/joe
DISTINFO_FILE=	${.CURDIR}/distinfo

.include "${MASTERDIR}/Makefile"
