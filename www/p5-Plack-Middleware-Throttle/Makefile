# New ports collection makefile for:	Plack::Middleware::Throttle
# Date created:		04 Sep 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Plack-Middleware-Throttle/Makefile,v 1.3 2012/11/17 06:02:53 svnexp Exp $
#

PORTNAME=	Plack-Middleware-Throttle
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of rate-limiting incoming HTTP requests for Plack

RUN_DEPENDS=	\
	p5-DateTime>0:${PORTSDIR}/devel/p5-DateTime \
	p5-libwww>0:${PORTSDIR}/www/p5-libwww \
	p5-Moose>0:${PORTSDIR}/devel/p5-Moose \
	p5-Plack>0:${PORTSDIR}/www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Plack::Middleware::Throttle.3 \
	Plack::Middleware::Throttle::Daily.3 \
	Plack::Middleware::Throttle::Hourly.3 \
	Plack::Middleware::Throttle::Interval.3 \
	Plack::Middleware::Throttle::Limiter.3

.include <bsd.port.mk>
