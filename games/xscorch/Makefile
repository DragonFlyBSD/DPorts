# New ports collection makefile for:	xscorch
# Date created:				19 Apr 2000
# Whom:					will
#
# $FreeBSD: ports/games/xscorch/Makefile,v 1.32 2012/11/17 05:57:58 svnexp Exp $
#

PORTNAME=	xscorch
PORTVERSION=	0.2.1
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.xscorch.org/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multiplayer tank shoot-em-up

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

OPTIONS_DEFINE=	MIKMOD
OPTIONS_DEFAULT=	MIKMOD

USE_GNOME=	gtk20
USE_PERL5=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN6=		xscorch.6

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMIKMOD}
LIB_DEPENDS+=	mikmod.2:${PORTSDIR}/audio/libmikmod
CONFIGURE_ARGS+=--with-libmikmod-prefix=${LOCALBASE}
.else
CONFIGURE_ARGS+=--disable-sound
.endif

.include <bsd.port.mk>
