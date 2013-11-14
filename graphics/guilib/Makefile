# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: graphics/guilib/Makefile 332200 2013-10-31 04:17:29Z eadler $

PORTNAME=	guilib
PORTVERSION=	1.2.1
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	http://www.libsdl.org/projects/GUIlib/src/
DISTNAME=	GUIlib-${PORTVERSION}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Simple GUI framework for use with SDL

USE_SDL=	sdl
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	 aclocal:env

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|$${CONFIG_SHELL-/bin/sh} $$ac_aux_dir|$$ac_aux_dir|' \
		${WRKSRC}/configure

post-configure:
	@${REINPLACE_CMD} -e 's|^ACLOCAL =.*|ACLOCAL = ${ACLOCAL}|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
