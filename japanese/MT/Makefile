# New ports collection makefile for:	ja-MT
# Date created:			Fri, 2 Oct 2009 07:56:20 GMT
# Whom:				Takefu Kenji <takefu@airport.fm>
#
# $FreeBSD: ports/japanese/MT/Makefile,v 1.8 2012/11/17 05:58:31 svnexp Exp $
#

CATEGORIES=	japanese www
DISTNAME=	MTOS-${PORTVERSION}-${PKGNAMEPREFIX:S,-,,}
PKGNAMEPREFIX=	ja-

COMMENT=	Japanese localization of the MovableType publishing system

MASTERDIR=	${.CURDIR}/../../www/MT
MT_LANG=	${PKGNAMEPREFIX:S,-,,}
CONFLICTS=	MT-[2-5].* de-MT-[2-5].* fr-MT-[2-5].* ru-MT-[2-5].*

MT_DOCS_URL=	http://movabletype.jp/documentation/
MT_UPGRADE_URL=	http://movabletype.jp/documentation/upgrade/

.include "${MASTERDIR}/Makefile"
