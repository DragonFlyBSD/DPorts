PORTNAME=	qt5
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Cross-platform application and UI framework (metaport)
WWW=		https://www.qt.io/

# * phonon4 is not part of Qt itself.
# * we don't want to pull in wayland just yet.
# * do not include qdoc to avoid hard dep on devel/llvmXY
# XXX(rene) exclude webengine
USE_QT=		${_USE_QT_ALL:Ndeclarative:Nwayland:Nwebengine:S/$/:run/}
USES=		metaport qt:5

.include <bsd.port.mk>
