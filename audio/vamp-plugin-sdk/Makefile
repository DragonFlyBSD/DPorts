# Created by: mathias.picker@gmx.de
# $FreeBSD: audio/vamp-plugin-sdk/Makefile 314460 2013-03-17 16:44:03Z eadler $

PORTNAME=	vamp-plugin-sdk
PORTVERSION=	2.3
CATEGORIES=	audio
MASTER_SITES=	http://code.soundsoftware.ac.uk/attachments/download/224/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Vamp audio analysis plugin SDK

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	sndfile.1:${PORTSDIR}/audio/libsndfile

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

USE_GNOME=	pkgconfig

.include <bsd.port.mk>
