# New ports collection makefile for:	ruby-less
# Date created:		2010-12-07
# Whom:			Nicola Vitale <nivit@FreeBSD.org>
#
# $FreeBSD: ports/www/rubygem-less/Makefile,v 1.3 2012/11/17 06:03:04 svnexp Exp $
#

PORTNAME=	less
PORTVERSION=	1.2.21
#PORTREVISION=	0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	The LESS Ruby gem compiles LESS code to CSS

RUN_DEPENDS=	rubygem-treetop>=1.4.2:${PORTSDIR}/devel/rubygem-treetop \
		rubygem-mutter>=0.4.2:${PORTSDIR}/devel/rubygem-mutter

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/lessc

.include <bsd.port.mk>
