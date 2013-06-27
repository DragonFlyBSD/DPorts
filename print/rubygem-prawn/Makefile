# Created by: wenheping@gmail.com
# $FreeBSD: print/rubygem-prawn/Makefile 321530 2013-06-22 02:41:35Z swills $

PORTNAME=	prawn
PORTVERSION=	0.12.0
CATEGORIES=	print rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast pure Ruby PDF generator

RUN_DEPENDS=	rubygem-pdf-reader>=0.9.0:${PORTSDIR}/print/rubygem-pdf-reader \
		rubygem-ttfunk>=1.0.2:${PORTSDIR}/print/rubygem-ttfunk

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
