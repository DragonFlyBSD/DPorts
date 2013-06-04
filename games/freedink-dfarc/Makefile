# Created by: shurd
# $FreeBSD: games/freedink-dfarc/Makefile 318863 2013-05-23 10:29:27Z zeising $

PORTNAME=	freedink-dfarc
PORTVERSION=	3.2.1
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	freedink
DISTNAME=	dfarc-${PORTVERSION}

MAINTAINER=	shurd@sasktel.net
COMMENT=	Frontend and .dmod installer for GNU FreeDink

USE_GMAKE=	yes
USE_WX=		2.6+
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	intltool
CONFIGURE_ARGS=	--with-wx-config=${WX_CONFIG} --disable-upx --disable-static

MAN1=		dfarc.1

.include <bsd.port.mk>
