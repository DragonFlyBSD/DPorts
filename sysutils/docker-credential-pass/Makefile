PORTNAME=	docker-credential-pass
DISTVERSIONPREFIX=	v
DISTVERSION=	0.6.4
PORTREVISION=	47
CATEGORIES=	sysutils

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Helper to use sysutils/password-store as Docker credentials store
WWW=		https://github.com/docker/docker-credential-helpers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${LOCALBASE}/bin/pass:sysutils/password-store

USES=		go

GO_PKGNAME=	github.com/docker/docker-credential-helpers
GO_TARGET=	./pass/cmd:${PORTNAME}

USE_GITHUB=	yes
GH_ACCOUNT=	docker
GH_PROJECT=	docker-credential-helpers

PLIST_FILES=	bin/docker-credential-pass

pre-build-script:
	${LN} -s ${GO_WRKSRC}/pass/cmd/main_linux.go ${GO_WRKSRC}/pass/cmd/main_dragonfly.go
	${LN} -s ${GO_WRKSRC}/pass/pass_linux.go ${GO_WRKSRC}/pass/pass_dragonfly.go

.include <bsd.port.mk>
