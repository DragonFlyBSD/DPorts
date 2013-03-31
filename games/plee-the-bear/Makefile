# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/plee-the-bear/Makefile 314960 2013-03-22 20:06:14Z makc $

PORTNAME=	plee-the-bear
PORTVERSION=	0.6.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/Plee%20the%20Bear/${PORTVERSION:R}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	2D platform jump and run game

LIB_DEPENDS=	boost_filesystem:${PORTSDIR}/devel/boost-libs \
		claw_application:${PORTSDIR}/devel/libclaw

USE_SDL=	sdl mixer
USE_GL=		gl glu
WANT_GNOME=	yes
INSTALLS_ICONS=	yes
USE_LDCONFIG=	yes
USE_GETTEXT=	yes
MAKE_JOBS_SAFE=	yes
USE_GCC=	4.6+

USES=		cmake
CMAKE_ARGS=	-Dlibclaw_DIR="${LOCALBASE}/share/libclaw/cmake" \
		-DBEAR_NO_EDITOR=YES

.include <bsd.port.mk>
