# $FreeBSD: www/p5-Catalyst-TraitFor-Request-BrowserDetect/Makefile 333070 2013-11-07 08:28:22Z vanilla $

PORTNAME=	Catalyst-TraitFor-Request-BrowserDetect
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Browser detection for Catalyst::Requests

BUILD_DEPENDS=	p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-CatalystX-RoleApplicator>=0:${PORTSDIR}/www/p5-CatalystX-RoleApplicator \
		p5-HTTP-BrowserDetect>=0:${PORTSDIR}/www/p5-HTTP-BrowserDetect
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
