# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: devel/rubygem-gettext/Makefile 340901 2014-01-24 14:46:50Z miwi $

PORTNAME=	gettext
PORTVERSION=	2.3.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	knu@FreeBSD.org
COMMENT=	A Ruby implementation of the gettext library

RUN_DEPENDS=	rubygem-locale>=2.0.5:${PORTSDIR}/devel/rubygem-locale

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rmsgfmt bin/rmsginit bin/rmsgmerge bin/rxgettext

.include <bsd.port.mk>
