# Ports collection makefile for:	rubygem-authlogic
# Date created:				24 June 2009
# Whom:					Alexander Logvinov <avl@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-authlogic/Makefile,v 1.15 2013/01/23 20:05:28 svnexp Exp $

PORTNAME=	authlogic
PORTVERSION=	3.2.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A clean, simple, and unobtrusive Ruby authentication solution

RUN_DEPENDS=	rubygem-activesupport>=3.0.7:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-activerecord>=3.0.7:${PORTSDIR}/databases/rubygem-activerecord

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
