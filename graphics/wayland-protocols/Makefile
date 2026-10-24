PORTNAME=	wayland-protocols
PORTVERSION=	1.49
CATEGORIES=	graphics
MASTER_SITES=	https://gitlab.freedesktop.org/wayland/${PORTNAME}/-/releases/${DISTVERSION}/downloads/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Wayland protocols
WWW=		https://wayland.freedesktop.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	wayland-scanner:graphics/wayland

USES=		meson pkgconfig python:env tar:xz

BINARY_ALIAS=	python3=${PYTHON_CMD}
NO_ARCH=	yes

OPTIONS_DEFINE=	TEST

TEST_USES=	python:build

.include <bsd.port.mk>
