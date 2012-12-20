# Ports collection makefile for: p5-Catalyst-Plugin-Setenv
# Date created:			 Apr 6, 2007
# Whom:				 lbr@freebsd.org
#
# $FreeBSD: ports/www/p5-Catalyst-Plugin-Setenv/Makefile,v 1.8 2012/11/17 06:02:47 svnexp Exp $
#

PORTNAME=	Catalyst-Plugin-Setenv
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set up the environment from Catalyst's config file

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	Catalyst::Plugin::Setenv.3

.include <bsd.port.mk>
