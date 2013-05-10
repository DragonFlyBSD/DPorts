# New ports collection makefile for:   lxde-icon-theme
# Date created:                09/23/2010
# Whom:                        Kris Moore <kmoore@freebsd.org>
#
# $FreeBSD: x11-themes/lxde-icon-theme/Makefile 316683 2013-04-27 18:25:24Z mva $
#

PORTNAME=	lxde-icon-theme
PORTVERSION=	0.0.1
PORTREVISION=	1
CATEGORIES=	x11-themes
MASTER_SITES=	SF/lxde/LXDE%20Icon%20Theme/lxde-icon-theme-${PORTVERSION}

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	LXDE Icon Theme

USE_BZIP2=	YES
USE_GMAKE=	yes
USES=		iconv
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}

DATADIR=	${PREFIX}/share/lxde
INSTALLS_ICONS=	YES

.include <bsd.port.mk>
