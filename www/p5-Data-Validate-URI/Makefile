# Created by: Tuc <freebsd-ports@t-b-o-h.net>
# $FreeBSD: www/p5-Data-Validate-URI/Makefile 338754 2014-01-05 12:20:02Z az $

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

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
