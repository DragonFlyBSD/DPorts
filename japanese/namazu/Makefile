# New ports collection makefile for:	namazu
# Date created:		17 March 1998
# Whom:			Seiichirou Hiraoka
#
# $FreeBSD: ports/japanese/namazu/Makefile,v 1.13 2012/11/17 05:58:37 svnexp Exp $
#

PORTNAME=	namazu
PORTVERSION=	1.3.0.11
CATEGORIES=	japanese textproc
MASTER_SITES=	http://www.namazu.org/stable/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	flathill

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Search engine software intended for easy use

BUILD_DEPENDS=	kakasi:${PORTSDIR}/japanese/kakasi \
		nkf:${PORTSDIR}/japanese/nkf
RUN_DEPENDS=	kakasi:${PORTSDIR}/japanese/kakasi \
		nkf:${PORTSDIR}/japanese/nkf

USE_PERL5=	yes
GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/src

.include <bsd.port.mk>
