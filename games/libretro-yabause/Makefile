PORTNAME=	libretro-yabause
DISTVERSION=	0.20230103
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Saturn emulator for libretro
WWW=		https://github.com/libretro/yabause

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	yabause
GH_TAGNAME=	4c96b96f7fbe07223627c469ff33376b2a634748

PLIST_FILES=	lib/libretro/yabause_libretro.so

BUILD_WRKSRC=	${WRKSRC}/yabause/src/libretro

.include <bsd.port.pre.mk>

post-patch:
.if ${ARCH} != "x86_64"
	@${REINPLACE_CMD} -e "s/HAVE_SSE = 1/HAVE_SSE = 0/" ${WRKSRC}/yabause/src/libretro/Makefile
.endif

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro
	${INSTALL_LIB} ${WRKSRC}/yabause/src/libretro/yabause_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro

.include <bsd.port.post.mk>
