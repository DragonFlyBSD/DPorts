# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: ports/www/rubygem-nanoc/Makefile,v 1.9 2013/02/06 00:52:07 svnexp Exp $

PORTNAME=	nanoc
PORTVERSION=	3.5.0
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
