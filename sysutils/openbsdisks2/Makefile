PORTNAME=	openbsdisks2
DISTVERSION=	0.5.0
CATEGORIES=	sysutils

MAINTAINER=	tuxillo@dragonflybsd.org
COMMENT=	UDisks2 service implementation for OpenBSD
WWW=		https://github.com/sizeofvoid/openbsdisks2

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libpolkit-qt5-core-1.so:sysutils/polkit-qt-1

USES=		cmake compiler:c++11-lang qt:5

USE_QT=		qmake:build buildtools:build core dbus

USE_GITHUB=		yes
GH_ACCOUNT=		sizeofvoid
GH_TAGNAME=		v0.5.0

.include <bsd.port.mk>
