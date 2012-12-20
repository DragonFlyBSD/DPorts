# New ports collection makefile for:	POE::Component::Server::PSGI
# Date created:		02 Apr 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-POE-Component-Server-PSGI/Makefile,v 1.4 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	POE-Component-Server-PSGI
PORTVERSION=	0.6
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to PSGI Server implementation for POE

RUN_DEPENDS=	p5-POEx-Role-PSGIServer>0:${PORTSDIR}/www/p5-POEx-Role-PSGIServer
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	POE::Component::Server::PSGI.3 \
	Plack::Server::POE.3

.include <bsd.port.mk>
