# New ports collection makefile for:	POE::Component::Server::PSGI
# Date created:		02 Apr 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: www/p5-POE-Component-Server-PSGI/Makefile 325960 2013-09-02 09:44:14Z az $
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

USES=		perl5
USE_PERL5=	configure

MAN3=	POE::Component::Server::PSGI.3 \
	Plack::Server::POE.3

.include <bsd.port.mk>
