# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: www/p5-CGI-Application-Plugin-LinkIntegrity/Makefile 314460 2013-03-17 16:44:03Z eadler $

PORTNAME=	CGI-Application-Plugin-LinkIntegrity
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Make tamper-resistent links in CGI::Application

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-CGI-Application-Plugin-AutoRunmode>=0:${PORTSDIR}/www/p5-CGI-Application-Plugin-AutoRunmode
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	CGI::Application::Plugin::LinkIntegrity.3

.include <bsd.port.mk>
