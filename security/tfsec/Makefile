PORTNAME=	tfsec
DISTVERSIONPREFIX=	v
DISTVERSION=	1.28.1
PORTREVISION=	10
CATEGORIES=	security

MAINTAINER=	nulldutra@proton.me
COMMENT=	Security scanner for Terraform
WWW=		https://aquasecurity.github.io/tfsec

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules

GO_MODULE=	github.com/aquasecurity/tfsec
GO_TARGET=	./cmd/${PORTNAME}

GO_BUILDFLAGS=	-ldflags="version.Version=${DISTVERSION}"

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
