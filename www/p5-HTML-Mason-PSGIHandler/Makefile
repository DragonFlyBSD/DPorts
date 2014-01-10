# $FreeBSD: www/p5-HTML-Mason-PSGIHandler/Makefile 338788 2014-01-05 15:44:11Z az $

PORTNAME=	HTML-Mason-PSGIHandler
PORTVERSION=	0.53
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	PSGI handler for HTML::Mason

BUILD_DEPENDS=	p5-CGI-PSGI>0:${PORTSDIR}/www/p5-CGI-PSGI \
		p5-HTML-Mason>0:${PORTSDIR}/www/p5-HTML-Mason
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Plack>=0:${PORTSDIR}/www/p5-Plack

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
