# Ports collection makefile for:        p5-Catalyst-Plugin-DateTime
# Date created:                 2010-12-27
# Whom:                         michael@fun-box.ru
# $FreeBSD: ports/www/p5-Catalyst-Plugin-DateTime/Makefile,v 1.3 2012/11/17 06:02:47 svnexp Exp $

PORTNAME=       Catalyst-Plugin-DateTime
PORTVERSION=    0.03
CATEGORIES=     www perl5
MASTER_SITES=   CPAN
PKGNAMEPREFIX=  p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=        DateTime support for Catalyst

RUN_DEPENDS=    p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
BUILD_DEPENDS=  ${RUN_DEPENDS}

PERL_CONFIGURE= YES

MAN3=   Catalyst::Plugin::DateTime.3

.include <bsd.port.mk>
