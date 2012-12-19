# New ports collection makefile for:	rubygem-turn
# Date created:		2011-10-27
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-turn/Makefile,v 1.5 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	turn
PORTVERSION=	0.9.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A new output format for Test::Unit

RUN_DEPENDS=	rubygem-ansi>=0:${PORTSDIR}/devel/rubygem-ansi \
		rubygem-minitest>=0:${PORTSDIR}/devel/rubygem-minitest

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/turn

.include <bsd.port.mk>
