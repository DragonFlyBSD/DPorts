# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: ports/irc/konversation/Makefile,v 1.43 2013/02/09 14:21:02 svnexp Exp $

PORTNAME=	konversation
PORTVERSION=	1.1
PORTREVISION=	5
CATEGORIES=	irc kde
MASTER_SITES=	${MASTER_SITE_BERLIOS}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	User friendly IRC client for KDE

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

USE_KDELIBS_VER=3
USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_XORG=	xcursor xrandr xscrnsaver

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
