# New ports collection makefile for:	www/p5-Data-Validate-URI
# Date created:				02 January 2008
# Whom:					Tuc <freebsd-ports@t-b-o-h.net>
#
# $FreeBSD: ports/www/p5-Data-Validate-URI/Makefile,v 1.6 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	Data-Validate-URI
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Data
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd-ports@t-b-o-h.net
COMMENT=	Common data validation methods for URIs

BUILD_DEPENDS=	p5-Data-Validate-Domain>=0:${PORTSDIR}/dns/p5-Data-Validate-Domain \
		p5-Data-Validate-IP>=0:${PORTSDIR}/net-mgmt/p5-Data-Validate-IP
RUN_DEPENDS=	p5-Data-Validate-Domain>=0:${PORTSDIR}/dns/p5-Data-Validate-Domain \
		p5-Data-Validate-IP>=0:${PORTSDIR}/net-mgmt/p5-Data-Validate-IP

PERL_CONFIGURE=	yes

MAN3=	Data::Validate::URI.3

.include <bsd.port.mk>
