# $FreeBSD: www/p5-SOAP-Transport-HTTP-Plack/Makefile 338785 2014-01-05 15:36:32Z az $

PORTNAME=	SOAP-Transport-HTTP-Plack
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension SOAP::Lite transport for Plack

RUN_DEPENDS=	\
	p5-SOAP-Lite>0:${PORTSDIR}/net/p5-SOAP-Lite
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
