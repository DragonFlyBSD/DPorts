# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: devel/rubygem-authlogic/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	authlogic
PORTVERSION=	3.3.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A clean, simple, and unobtrusive Ruby authentication solution

RUN_DEPENDS=	rubygem-activesupport>=3.2:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-activerecord>=3.2:${PORTSDIR}/databases/rubygem-activerecord

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
