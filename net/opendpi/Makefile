# Created by: fernandotcl
# $FreeBSD: net/opendpi/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	opendpi
PORTVERSION=	1.2.0
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	fernando@netfilter.com.br
COMMENT=	An open source deep packet inspection engine

GNU_CONFIGURE=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc" || ${ARCH} == "sparc64"
BROKEN=		Does not compile on powerpc or sparc64: includes i386 assembler
.endif

.include <bsd.port.post.mk>
