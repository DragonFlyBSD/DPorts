# Ports collection makefile for:	gem-nanoc
# Date created:				26 Apr 2012
# Whom:					Ryan Steinmetz <zi@FreeBSD.org>
#
# $FreeBSD: ports/www/rubygem-nanoc/Makefile,v 1.8 2012/12/15 02:57:25 svnexp Exp $

PORTNAME=	nanoc
PORTVERSION=	3.4.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	zi@FreeBSD.org
COMMENT=	A simple but very flexible static site generator

RUN_DEPENDS=	rubygem-cri>=2.2:${PORTSDIR}/devel/rubygem-cri

USE_RUBY=	yes
USE_RUBYGEMS=	yes
USE_RAKE=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/nanoc

.include <bsd.port.mk>
