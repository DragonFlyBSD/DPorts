# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/rubygem-turn/Makefile 332043 2013-10-30 02:47:06Z swills $

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
