# Created by: Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
# $FreeBSD: databases/libhsclient/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	libhsclient
PORTVERSION=	1.0.6
PORTREVISION=	${REVISION}
CATEGORIES=	databases
MASTER_SITES=	http://www.cs.nctu.edu.tw/~jnlin/distfiles/
DISTNAME=	HandlerSocket-Plugin-for-MySQL-${PORTVERSION}-${REVISION}

MAINTAINER=	jnlin@csie.nctu.edu.tw
COMMENT=	Client Library of HandlerSocket Plugin

WRKSRC=		${WRKDIR}/HandlerSocket-Plugin-for-MySQL

REVISION=	20110614

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-handlersocket-server=no

.include <bsd.port.mk>
