PORTNAME=	yggdrasil
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5.15
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	freebsd@neilalexander.dev
COMMENT=	Experimental end-to-end encrypted self-arranging IPv6 network
WWW=		https://yggdrasil-network.github.io/ \
		https://github.com/yggdrasil-network/yggdrasil-go/

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules
USE_RC_SUBR=	yggdrasil

GO_MODULE=	github.com/yggdrasil-network/yggdrasil-go
GO_TARGET=	./cmd/yggdrasil \
		./cmd/yggdrasilctl

GO_BUILDFLAGS=	-ldflags="-s -w \
		-X github.com/yggdrasil-network/yggdrasil-go/src/version.buildName=${PORTNAME} \
		-X github.com/yggdrasil-network/yggdrasil-go/src/version.buildVersion=${DISTVERSION} \
		"

PLIST_FILES=	bin/yggdrasil \
		bin/yggdrasilctl

dfly-patch:
	${REINPLACE_CMD} -e 's|^\(//go:build .*\)$$|\1 \|\| dragonfly|' \
		${WRKSRC}/vendor/golang.zx2c4.com/wireguard/tun/operateonfd.go
	${REINPLACE_CMD} -e 's|wgtun.CreateTUN(ifname, mtu)|wgtun.CreateTUN(ifname, int(mtu))|' \
		${WRKSRC}/src/tun/tun_other.go

.include <bsd.port.mk>
