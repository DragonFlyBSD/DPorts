# Created by: Dennis Herrmann <dhn@FreeBSD.org>
# $FreeBSD: net/rubygem-rubytter/Makefile 340904 2014-01-24 14:53:03Z miwi $

PORTNAME=	rubytter
PORTVERSION=	1.5.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Simple Twitter library

RUN_DEPENDS=	rubygem-json>=1.1.3:${PORTSDIR}/devel/rubygem-json \
		rubygem-oauth>=0.3.6:${PORTSDIR}/net/rubygem-oauth

USE_RUBY=	yes
USE_RUBYGEMS=	yes
USE_RAKE=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
