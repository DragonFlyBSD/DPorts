PORTNAME=	cilium
DISTVERSIONPREFIX=	v
DISTVERSION=	0.18.8
PORTREVISION=	15
CATEGORIES=	sysutils

MAINTAINER=	dutra@FreeBSD.org
COMMENT=	Manage Kubernetes clusters running Cilium
WWW=		https://github.com/cilium/cilium-cli

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

GO_MODULE=	github.com/cilium/cilium-cli
GO_BUILDFLAGS=	-ldflags="\
		-X github.com/cilium/cilium/cilium-cli/defaults.CLIVersion=${DISTVERSION}"

GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

dfly-patch:
	${REINPLACE_CMD} -e 's|^\(//go:build .*freebsd.*\)$$|\1 \|\| dragonfly|' \
		${GO_WRKSRC}/vendor/github.com/moby/term/termios_bsd.go
	${REINPLACE_CMD} -e 's|^\(//go:build .*!freebsd.*\)$$|\1 \&\& !dragonfly|' \
		${GO_WRKSRC}/vendor/github.com/moby/term/termios_nonbsd.go

.include <bsd.port.mk>
