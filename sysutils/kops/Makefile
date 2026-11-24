PORTNAME=	kops
PORTVERSION=	1.36.2
DISTVERSIONPREFIX=	v
PORTREVISION=	6
CATEGORIES=	sysutils

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Kubernetes Operations
WWW=		https://github.com/kubernetes/kops

LICENSE=	APACHE20

BROKEN_i386=	linking fails: mapping output file failed: cannot allocate memory

BUILD_DEPENDS=	go-bindata:devel/go-bindata

USES=		go:modules

USE_GITHUB=	yes
GH_ACCOUNT=	kubernetes

GO_PKGNAME=	k8s.io/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cmd/${PORTNAME}
GO_BUILDFLAGS=	-ldflags=all="-X k8s.io/kops.Version=${PORTVERSION}"

PLIST_FILES=	bin/${PORTNAME}

pre-build:
	cd ${WRKSRC} && \
		${LOCALBASE}/bin/go-bindata -o upup/models/bindata.go -pkg models \
		-prefix upup/models/ upup/models/...

dfly-patch:
	${REINPLACE_CMD} -e 's|^\(//go:build .*freebsd.*\)$$|\1 \|\| dragonfly|' \
		${GO_WRKSRC}/vendor/github.com/moby/term/termios_bsd.go
	${REINPLACE_CMD} -e 's|^\(//go:build .*!freebsd.*\)$$|\1 \&\& !dragonfly|' \
		${GO_WRKSRC}/vendor/github.com/moby/term/termios_nonbsd.go

.include <bsd.port.mk>
