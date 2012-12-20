# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: ports/www/p5-CGI-Application-Plugin-AutoRunmode/Makefile,v 1.11 2012/11/17 06:02:45 svnexp Exp $

PORTNAME=	CGI-Application-Plugin-AutoRunmode
PORTVERSION=	0.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CGI::App plugin to automatically register runmodes

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	CGI::Application::Plugin::AutoRunmode.3 \
    	CGI::Application::Plugin::AutoRunmode::FileDelegate.3

.include <bsd.port.mk>
