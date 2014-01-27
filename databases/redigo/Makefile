# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: databases/redigo/Makefile 339441 2014-01-11 17:46:33Z jlaffaye $

PORTNAME=	redigo
PORTVERSION=	20130702
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	LOCAL/gblach/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Go client for the Redis database

WRKSRC=		${WRKDIR}/${DISTNAME}/redis
GO_PKGNAME=	github.com/garyburd/${PORTNAME}/redis

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/go/files/bsd.go.mk"
.include <bsd.port.post.mk>
