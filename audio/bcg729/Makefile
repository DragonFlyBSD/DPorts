PORTNAME=	bcg729
PORTVERSION=	1.1.2
CATEGORIES=	audio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Software G729A encoder and decoder library written in C
WWW=		https://www.linphone.org/technical-corner/bcg729

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cmake

USE_GITLAB=	yes
GL_SITE=	https://gitlab.linphone.org
GL_ACCOUNT=	BC/public
GL_TAGNAME=	fb195811fe630415c9bf433c0c0bebde14314ff2
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_SHARED_LIBS:BOOL=True

post-configure:
	${SED} 's|@prefix@|${PREFIX}|g ; s|@exec_prefix@|$${prefix}|g ; \
	  s|@libdir@|$${prefix}/lib|g ; s|@includedir@|$${prefix}/include|g ; \
	  s|@PACKAGE_VERSION@|${PORTVERSION}|g' \
	    ${WRKSRC}/libbcg729.pc.in > ${WRKSRC}/libbcg729.pc

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libdata/pkgconfig
	${INSTALL_DATA} ${WRKSRC}/libbcg729.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig

.include <bsd.port.mk>
