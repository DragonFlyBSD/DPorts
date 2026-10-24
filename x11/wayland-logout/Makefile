PORTNAME=	wayland-logout
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4
PORTREVISION=	1
CATEGORIES=	x11 wayland

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Simple logout on Wayland
WWW=		https://github.com/soreau/wayland-logout

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		meson
USE_GITHUB=	yes
GH_ACCOUNT=	soreau
PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

IGNORE:= needs the peer pid of a local socket, which LOCAL_PEERCRED on DragonFly does not report
.include <bsd.port.mk>
