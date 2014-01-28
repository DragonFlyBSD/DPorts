# Created by: Stephen Hurd <shurd@sasktel.net>
# $FreeBSD: games/freedink-dfarc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	freedink-dfarc
PORTVERSION=	3.10
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	freedink
DISTNAME=	dfarc-${PORTVERSION}

MAINTAINER=	shurd@sasktel.net
COMMENT=	Frontend and .dmod installer for GNU FreeDink

USES=		desktop-file-utils gettext gmake shared-mime-info
USE_WX=		2.6+
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
USE_GNOME=	intltool
CONFIGURE_ARGS=	--with-wx-config=${WX_CONFIG} --disable-upx --disable-static

.include <bsd.port.mk>
