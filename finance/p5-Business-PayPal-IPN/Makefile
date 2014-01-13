# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: finance/p5-Business-PayPal-IPN/Makefile 338757 2014-01-05 12:33:14Z az $

PORTNAME=	Business-PayPal-IPN
PORTVERSION=	1.94
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	coryking@mozimedia.com
COMMENT=	Perl extension that implements PayPal IPN v1.5

BUILD_DEPENDS=	p5-Crypt-SSLeay>=0.56:${PORTSDIR}/security/p5-Crypt-SSLeay \
		p5-libwww>=5.805:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-Crypt-SSLeay>=0.56:${PORTSDIR}/security/p5-Crypt-SSLeay \
		p5-libwww>=5.805:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
