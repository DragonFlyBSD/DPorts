# New ports collection makefile for:    tork
# Date created:                         09 Feb 2008
# Whom:                                 Beat Gätzi <beat@chruetertee.ch>
#
# $FreeBSD: ports/net-mgmt/tork/Makefile,v 1.18 2012/11/17 06:00:38 svnexp Exp $
#

PORTNAME=	tork
PORTVERSION=	0.30
PORTREVISION=	5
CATEGORIES=	net-mgmt security
MASTER_SITES=	SF/${PORTNAME}/TorK%20Source%20Tarball/TorK-${PORTVERSION}

MAINTAINER=	thomas.sander@gmx.de
COMMENT=	TorK is an Anonymity Manager for the KDE Desktop

USE_GMAKE=	yes
USE_GNOME=	pkgconfig
USE_AUTOTOOLS=	libtool aclocal:env
USE_GETTEXT=	yes
USE_XORG=	xext
USE_LDCONFIG=	yes
INSTALLS_ICONS=	yes
AUTOTOOLSFILES=	aclocal.m4

USE_KDELIBS_VER=3
USE_QT_VER=	3

MAN1=		tork.1 torkarkollon.1 torkify.1 torksocks.1
MAN5=		torksocks.conf.5
MAN8=		torksocks.8

OPTIONS+=	PRIVOXY	"Install privoxy"	On \
		MIXMINION "Install mixminion"	Off

.include <bsd.port.pre.mk>

RUN_DEPENDS+=	${LOCALBASE}/bin/tor:${PORTSDIR}/security/tor

.if defined(WITH_PRIVOXY)
RUN_DEPENDS+=	${LOCALBASE}/sbin/privoxy:${PORTSDIR}/www/privoxy
.endif

.if defined(WITH_MIXMINION)
RUN_DEPENDS+=	${LOCALBASE}/bin/mixminion:${PORTSDIR}/mail/mixminion
.endif

.include <bsd.port.post.mk>
