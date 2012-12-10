# New ports collection makefile for:	egypt
# Date created:		21 April 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/devel/egypt/Makefile,v 1.8 2012/11/17 05:55:41 svnexp Exp $
#

PORTNAME=	egypt
PORTVERSION=	1.10
CATEGORIES=	devel perl5
MASTER_SITES=	http://www.gson.org/egypt/download/ CENKES

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Create call graphs of C programs

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USE_PERL5_RUN=	yes
PERL_CONFIGURE=	yes
MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/${PORTNAME} %%SITE_PERL%%/%%PERL_ARCH%%/auto/${PORTNAME}/.packlist
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/${PORTNAME}

.include <bsd.port.mk>
