# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: www/rubygem-haml-coderay/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	haml-coderay
PORTVERSION=	0.2.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Adds a CodeRay syntax highlighting filter to Haml

RUN_DEPENDS=	rubygem-coderay>=0:${PORTSDIR}/textproc/rubygem-coderay \
		rubygem-haml>=0:${PORTSDIR}/www/rubygem-haml

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
