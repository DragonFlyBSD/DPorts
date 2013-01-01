# New ports collection makefile for:	pidgin-privacy-please
# Date created:				01 Sep 2010
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/net-im/pidgin-privacy-please/Makefile,v 1.10 2012/11/17 06:00:28 svnexp Exp $
#

PORTNAME=	pidgin-privacy-please
PORTVERSION=	0.7.1
PORTREVISION=	2
CATEGORIES=	net-im
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A privacy plugin for the pidgin instant messenger

LICENSE=	GPLv2

LIB_DEPENDS=	purple.10:${PORTSDIR}/net-im/libpurple
BUILD_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin
RUN_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes
USE_GNOME=	gtk20
USE_LDCONFIG=	${PREFIX}/lib/pidgin

.include <bsd.port.mk>
