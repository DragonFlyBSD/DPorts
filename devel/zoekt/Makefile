PORTNAME=	zoekt
DISTVERSION=	0.0.0.20261027
CATEGORIES=	devel textproc

MAINTAINER=	ahuete.devel@gmail.com
COMMENT=	Fast trigram-based code search engine
WWW=		https://github.com/sourcegraph/zoekt

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	git:devel/git \
		uctags:devel/universal-ctags

USES=		go:1.26+,modules
USE_RC_SUBR=	zoekt_webserver

GO_MODULE=	github.com/sourcegraph/zoekt@v0.0.0-20261027114318-305408eb2c3f
GO_TARGET=	./cmd/zoekt \
		./cmd/zoekt-archive-index \
		./cmd/zoekt-dynamic-indexserver \
		./cmd/zoekt-git-clone \
		./cmd/zoekt-git-index \
		./cmd/zoekt-index \
		./cmd/zoekt-indexserver \
		./cmd/zoekt-local-sync \
		./cmd/zoekt-merge-index \
		./cmd/zoekt-mirror-bitbucket-server \
		./cmd/zoekt-mirror-gerrit \
		./cmd/zoekt-mirror-gitea \
		./cmd/zoekt-mirror-github \
		./cmd/zoekt-mirror-gitiles \
		./cmd/zoekt-mirror-gitlab \
		./cmd/zoekt-repo-index \
		./cmd/zoekt-webserver
# go.mod asks for toolchain go1.27.3; build with the ports compiler instead
# of letting the go command download a newer one.
GO_ENV+=	GOTOOLCHAIN=local

PLIST_FILES=	${GO_TARGET:T:S,^,bin/,}

.include <bsd.port.mk>
