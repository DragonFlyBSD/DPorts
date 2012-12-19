# Ports collection makefile for:	rubygem-templater
# Date created:				03 February 2009
# Whom:					Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-templater/Makefile,v 1.7 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	templater
PORTVERSION=	1.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby code generation framework

RUN_DEPENDS=	rubygem-highline>=1.4.0:${PORTSDIR}/devel/rubygem-highline \
		rubygem-extlib>=0.9.5:${PORTSDIR}/devel/rubygem-extlib \
		rubygem-diff-lcs>=1.1.2:${PORTSDIR}/textproc/rubygem-diff-lcs

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
