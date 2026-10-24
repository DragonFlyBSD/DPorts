PORTNAME=	bcmatroska2
DISTVERSION=	5.4.118
CATEGORIES=	multimedia

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Belledonne Communications Matroska media container support
WWW=		https://gitlab.linphone.org/BC/public/bcmatroska2

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libbctoolbox.so:net/bctoolbox \
		libbcunit.so:devel/bcunit

USES=		cmake compiler:c++17-lang
USE_GITLAB=	yes
GL_SITE=	https://gitlab.linphone.org/BC
GL_ACCOUNT=	public
USE_LDCONFIG=	yes

CMAKE_ON=	BUILD_SHARED_LIBS

PORTSCOUT=	ignore:1

dfly-patch:
	${REINPLACE_CMD} -e 's|FreeBSD|DragonFly|' \
		${WRKSRC}/corec/corec/portab.h \
		${WRKSRC}/libmatroska2/minilzo/minilzo.c \
		${WRKSRC}/libmatroska2/minilzo/lzodefs.h \
		${WRKSRC}/corec/corec/helpers/file/file_libc.c \
		${WRKSRC}/corec/corec/helpers/file/file_bctbx.c

.include <bsd.port.mk>
