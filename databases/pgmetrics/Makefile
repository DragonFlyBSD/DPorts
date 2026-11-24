PORTNAME=	pgmetrics
PORTVERSION=	1.19.1
PORTREVISION=	3
DISTVERSIONPREFIX=v
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Collect and display info & stats from a running PostgreSQL server
WWW=		https://pgmetrics.io/

LICENSE=	APACHE20

USES=		go:modules

GO_MODULE=	github.com/rapidloop/pgmetrics

GO_TARGET=	./cmd/${PORTNAME}
GO_BUILDFLAGS=	-ldflags="-s -w -X main.version=${PORTVERSION}"
CGO_ENABLED=	0

dfly-patch:
	${CP} ${WRKSRC}/collector/system_freebsd.go ${WRKSRC}/collector/system_dragonfly.go

.include <bsd.port.mk>
