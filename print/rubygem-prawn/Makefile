# Ports collection makefile for:	rubygem-prawn
# Date created:				29 Oct 2008
# Whom:					wenheping@gmail.com
#
# $FreeBSD: ports/print/rubygem-prawn/Makefile,v 1.17 2012/11/17 06:00:54 svnexp Exp $

PORTNAME=	prawn
PORTVERSION=	0.8.4
PORTREVISION=	1
CATEGORIES=	print rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Fast pure Ruby PDF generator

RUN_DEPENDS=	rubygem-prawn-layout>=0.8.4:${PORTSDIR}/print/rubygem-prawn-layout \
		rubygem-prawn-format>=0.2.2:${PORTSDIR}/print/rubygem-prawn-format \
		rubygem-prawn-security>=0.8.4:${PORTSDIR}/print/rubygem-prawn-security

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
