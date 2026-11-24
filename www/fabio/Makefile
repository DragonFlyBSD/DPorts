PORTNAME=	fabio
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.11
PORTREVISION=	10
CATEGORIES=	www

MAINTAINER=	stl@ossuary.net
COMMENT=	Zero-conf load balancing HTTP(S) router managed by Consul
WWW=		https://github.com/fabiolb/fabio

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

USE_RC_SUBR=	fabio

GO_MODULE=	github.com/fabiolb/fabio
GO_TARGET=	:${PREFIX}/sbin/fabio
GO_BUILDFLAGS=	-ldflags "-X main.GitDescribe=v${DISTVERSION}"

PLIST_FILES=	"@sample etc/fabio.properties.sample" \
		sbin/fabio

post-install:
	${INSTALL_DATA} ${GO_WRKSRC}/fabio.properties ${STAGEDIR}${PREFIX}/etc/fabio.properties.sample

dfly-patch:
	${REINPLACE_CMD} -e 's@^//go:build freebsd || netbsd || openbsd$$@//go:build dragonfly || freebsd || netbsd || openbsd@' \
		-e 's@^// +build freebsd netbsd openbsd$$@// +build dragonfly freebsd netbsd openbsd@' \
		${GO_WRKSRC}/vendor/github.com/osrg/gobgp/v3/pkg/zebra/zapi_bsd.go

.include <bsd.port.mk>
