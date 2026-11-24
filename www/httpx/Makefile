PORTNAME=	httpx
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.10
PORTREVISION=	16
CATEGORIES=	www

MAINTAINER=	dutra@FreeBSD.org
COMMENT=	Multi-purpose HTTP toolkit
WWW=		https://github.com/projectdiscovery/httpx

LICENSE=	MIT

USES=		go:modules
GO_MODULE=	github.com/projectdiscovery/httpx

GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

dfly-patch:
	${REINPLACE_CMD} -e 's@^//go:build darwin || freebsd || @//go:build darwin || freebsd || dragonfly || @' \
		${GO_WRKSRC}/vendor/github.com/projectdiscovery/utils/permission/permission_other.go

.include <bsd.port.mk>
