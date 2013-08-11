# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: www/p5-CGI-Application-Plugin-AutoRunmode/Makefile 324171 2013-08-02 18:21:05Z az $

PORTNAME=	CGI-Application-Plugin-AutoRunmode
PORTVERSION=	0.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CGI::App plugin to automatically register runmodes

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	CGI::Application::Plugin::AutoRunmode.3 \
    	CGI::Application::Plugin::AutoRunmode::FileDelegate.3

.include <bsd.port.mk>
