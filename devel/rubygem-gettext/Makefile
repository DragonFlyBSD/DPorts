# New ports collection makefile for:	Ruby GetText
# Date created:		4 February 2002
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/devel/rubygem-gettext/Makefile,v 1.44 2012/11/17 05:56:59 svnexp Exp $
#

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
