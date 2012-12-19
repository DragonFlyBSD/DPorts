# $FreeBSD: ports/www/rubygem-rubyfulsoup/Makefile,v 1.11 2012/11/17 06:03:05 svnexp Exp $

PORTNAME=	rubyfulsoup
PORTVERSION=	1.0.4
CATEGORIES=	www textproc rubygems
MASTER_SITES=	RG
DISTNAME=	rubyful_soup-${PORTVERSION}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby port of the HTML/XML parser Beautiful Soup

RUN_DEPENDS=	rubygem-htmltools>=1.10:${PORTSDIR}/textproc/rubygem-htmltools

GEM_NAME=	${DISTNAME}

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
