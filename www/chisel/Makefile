PORTNAME=	chisel
DISTVERSIONPREFIX=	v
DISTVERSION=	1.11.3
PORTREVISION=	16
CATEGORIES=	www

MAINTAINER=	lcook@FreeBSD.org
COMMENT=	Fast TCP tunnel over HTTP
WWW=		https://github.com/jpillora/chisel

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

GO_MODULE=	github.com/jpillora/${PORTNAME}
GO_BUILDFLAGS=	-ldflags "\
		-s -w \
		-X ${GO_MODULE}/share.BuildVersion=${DISTVERSION}"

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} \
		${STAGEDIR}${DOCSDIR}

dfly-patch:
	${REINPLACE_CMD} -e 's@^// +build darwin freebsd$$@& dragonfly@' \
		-e 's@^// +build linux darwin freebsd$$@& dragonfly@' \
		-e 's@^// +build !windows,!linux,!darwin,!freebsd@&,!dragonfly@' \
		${GO_WRKSRC}/vendor/github.com/andrew-d/go-termutil/*.go

.include <bsd.port.mk>
