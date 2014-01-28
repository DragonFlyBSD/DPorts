# Created by: Shen Chuan-Hsing <statue@mail.elife.idv.tw>
# $FreeBSD: chinese/joe/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
