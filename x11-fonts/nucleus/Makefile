# New ports collection makefile for:	nucleus
# Date created:				Sat Aug 12 15:02:03 CEST 2000
# Whom:					olgeni@uli.it
#
# $FreeBSD: ports/x11-fonts/nucleus/Makefile,v 1.14 2012/11/17 06:03:29 svnexp Exp $
#

PORTNAME=	nucleus
PORTVERSION=	0.77
PORTREVISION=	4
CATEGORIES=	x11-fonts
MASTER_SITES=	SF/xfonts/OldFiles

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Another font package for X

BUILD_DEPENDS=	bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf
RUN_DEPENDS=	mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir \
		mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale

NO_WRKSUBDIR=	yes
USE_XORG=	x11

post-install:
	@${CAT} ${DESCR}

.include <bsd.port.mk>
