# Created by: Mita Yoshio <mita@jp.FreeBSD.org>
# $FreeBSD: x11-fonts/etlfonts/Makefile 316786 2013-04-29 08:57:12Z bapt $

PORTNAME=	etlfonts-noncjk
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	# disappeared
DISTNAME=	non-cjk
EXTRACT_SUFX=	.tar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X11 supplemental fonts

BUILD_DEPENDS=	bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf
RUN_DEPENDS=	mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir \
		mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale

USE_XORG=	x11

post-extract:
	@${GUNZIP_CMD} ${WRKSRC}/*.gz

post-install:
	@${SH} ${PKGREQ} ${PKGNAME} INSTALL

.include <bsd.port.mk>
