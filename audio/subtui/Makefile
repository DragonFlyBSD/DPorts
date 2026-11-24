PORTNAME=		SubTUI
DISTVERSIONPREFIX=	v
DISTVERSION=		2.14.3
PORTREVISION=	8
CATEGORIES=		audio

MAINTAINER=	jbo@FreeBSD.org
COMMENT=	Lightweight subsonic TUI music player
WWW=		https://github.com/MattiaPun/SubTUI

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	mpv>0:multimedia/mpv

USES=		go:modules
GO_MODULE=	github.com/MattiaPun/SubTUI/v2

PLIST_FILES=	bin/SubTUI

dfly-patch:
	${REINPLACE_CMD} -e 's@^//go:build linux || freebsd$$@& || dragonfly@' \
		${WRKSRC}/internal/integration/media_dbus.go \
		${WRKSRC}/internal/integration/media_dbus_methods.go \
		${WRKSRC}/internal/integration/media_dbus_props.go

.include <bsd.port.mk>
