# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: www/p5-CGI-Application-Plugin-Config-YAML/Makefile 338763 2014-01-05 13:05:56Z az $

PORTNAME=	CGI-Application-Plugin-Config-YAML
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Add Config::YAML support to CGI::Application

BUILD_DEPENDS=	p5-CGI-Application>4.01:${PORTSDIR}/www/p5-CGI-Application \
		p5-Config-YAML>=0:${PORTSDIR}/devel/p5-Config-YAML
RUN_DEPENDS=	p5-CGI-Application>4.01:${PORTSDIR}/www/p5-CGI-Application \
		p5-Config-YAML>=0:${PORTSDIR}/devel/p5-Config-YAML

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
