# New ports collection makefile for:	Plack::Middleware::Status
# Date created:		01 Nov 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: www/p5-Plack-Middleware-Status/Makefile 326042 2013-09-02 17:29:36Z az $
#

PORTNAME=	Plack-Middleware-Status
PORTVERSION=	1.101150
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to map urls to status code-driven responses for Plack

RUN_DEPENDS=	\
	p5-libwww>0:${PORTSDIR}/www/p5-libwww \
	p5-Plack>0:${PORTSDIR}/www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Plack::Middleware::Status.3

.include <bsd.port.mk>
