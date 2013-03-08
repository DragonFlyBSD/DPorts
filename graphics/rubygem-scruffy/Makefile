# ex:ts=8
# Ports collection makefile for:	rubygem-scruffy
# Date created:			Jan 7, 2007
# Whom:				ijliao
#
# $FreeBSD: ports/graphics/rubygem-scruffy/Makefile,v 1.14 2013/02/07 03:43:29 svnexp Exp $
#

PORTNAME=	scruffy
PORTVERSION=	0.2.6
PORTREVISION=	1
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Beautiful Graphs for Ruby

RUN_DEPENDS=	rubygem-builder>=2.0.0:${PORTSDIR}/devel/rubygem-builder

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST= yes

post-install:
	${REINPLACE_CMD} -e 's|#{options|0 0 #{options|' \
		${PREFIX}/${GEM_LIB_DIR}/lib/scruffy/renderers/base.rb
	grep options ${PREFIX}/${GEM_LIB_DIR}/lib/scruffy/renderers/base.rb

.include <bsd.port.mk>
