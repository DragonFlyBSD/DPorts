# New ports collection makefile for:	opendpi
# Date created:		13 November 2009
# Whom:			fernandotcl
#
# $FreeBSD: ports/net/opendpi/Makefile,v 1.5 2012/11/17 06:00:08 svnexp Exp $
#

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
