PORTNAME=	urlfinder
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.3
PORTREVISION=	16
CATEGORIES=	www

MAINTAINER=	dutra@FreeBSD.org
COMMENT=	High-speed tool for passively gathering URLs
WWW=		https://github.com/projectdiscovery/urlfinder

LICENSE=	MIT

USES=		go:modules
GO_MODULE=	github.com/projectdiscovery/${PORTNAME}

GO_TARGET=	./cmd/${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

dfly-patch:
	${REINPLACE_CMD} -e 's@^//go:build darwin || freebsd || @//go:build darwin || freebsd || dragonfly || @' \
		${GO_WRKSRC}/vendor/github.com/projectdiscovery/utils/permission/permission_other.go

.include <bsd.port.mk>
