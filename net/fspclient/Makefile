# Created by: ache
# $FreeBSD: net/fspclient/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	fspclient
PORTVERSION=	0.93.0
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	cy@FreeBSD.org
COMMENT=	A ftp-like client for the FSP service

USE_BZIP2=	yes
USE_SCONS=	yes
SCONS_ARGS=	prefix=${PREFIX}

MAN1=		fsp.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/fsp

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.include <bsd.port.post.mk>
