PORTNAME=	xpointerbarrier
DISTVERSIONPREFIX=	v
DISTVERSION=	26.06
CATEGORIES=	x11
MASTER_SITES=	https://movq.de/git/xpointerbarrier/archives/

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Pointer barriers to jail the mouse within a screen
WWW=		https://movq.de/git/xpointerbarrier/file/README.html

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pkgconfig xorg
USE_XORG=	x11 xfixes xrandr

ALL_TARGET=

PLIST_FILES=	bin/xpointerbarrier \
		share/man/man1/xpointerbarrier.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xpointerbarrier ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/xpointerbarrier.1 ${STAGEDIR}${PREFIX}/share/man/man1/

.include <bsd.port.mk>
