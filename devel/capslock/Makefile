PORTNAME=	capslock
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.3
PORTREVISION=	1
CATEGORIES=	devel net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Capability analysis CLI for Go packages
WWW=		https://github.com/google/capslock

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

GO_MODULE=	github.com/google/capslock
GO_TARGET=	./cmd/capslock

PLIST_FILES=	bin/capslock

post-patch:
	@${REINPLACE_CMD} -e 's|"go"|"go${GO_SUFFIX}"|g' \
		${WRKSRC}/vendor/golang.org/x/tools/go/gcexportdata/gcexportdata.go \
		${WRKSRC}/vendor/golang.org/x/tools/internal/gcimporter/gcimporter.go \
		${WRKSRC}/vendor/golang.org/x/tools/internal/gocommand/invoke.go \
		${WRKSRC}/vendor/golang.org/x/tools/internal/goroot/importcfg.go

.include <bsd.port.mk>
