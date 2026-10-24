PORTNAME=	filebot
DISTVERSION=	5.2.3
CATEGORIES=	multimedia java
MASTER_SITES=	https://get.filebot.net/filebot/FileBot_${DISTVERSION}/
DISTNAME=	FileBot_${DISTVERSION}-portable

MAINTAINER=	dan.kotowski@a9development.com
COMMENT=	FileBot is the ultimate tool for organizing and renaming your media
WWW=		https://www.filebot.net/

LICENSE=	FileBot_EULA
LICENSE_NAME=	FileBot End User License Agreement
LICENSE_TEXT=	Description of the license can be obtained from the following URL: https://www.filebot.net/eula.html
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

ONLY_FOR_ARCHS=	amd64

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libmediainfo.so:multimedia/libmediainfo
RUN_DEPENDS=	chromaprint>0:audio/chromaprint \
		ffprobe:multimedia/ffmpeg \
		zenity:x11/zenity

USES=		java tar:xz
JAVA_VERSION=	25

NO_WRKSUBDIR=	yes
NO_BUILD=	yes
BUNDLE_LIBS=	yes

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/${PORTNAME}/jar
	@cd ${WRKSRC}/jar && \
		${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/share/${PORTNAME}/jar/
	${MKDIR} ${STAGEDIR}${PREFIX}/share/${PORTNAME}/lib/FreeBSD-amd64/
	${INSTALL_DATA} ${WRKSRC}/lib/FreeBSD-amd64/libjnidispatch.so \
		${STAGEDIR}${PREFIX}/share/${PORTNAME}/lib/FreeBSD-amd64/libjnidispatch.so
	${INSTALL_SCRIPT} ${WRKSRC}/filebot.sh ${STAGEDIR}${PREFIX}/share/${PORTNAME}/
	${RLN} ${STAGEDIR}${PREFIX}/share/${PORTNAME}/filebot.sh ${STAGEDIR}${PREFIX}/bin/filebot

.include <bsd.port.mk>
