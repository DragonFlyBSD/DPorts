# New ports collection makefile for:	Plack::Middleware::JSConcat
# Date created:		07 Apr 2010
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: www/p5-Plack-Middleware-JSConcat/Makefile 326148 2013-09-03 13:06:13Z az $
#

PORTNAME=	Plack-Middleware-JSConcat
PORTVERSION=	0.29
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to concatenate JavaScripts

RUN_DEPENDS=	\
	p5-IPC-Run3>0:${PORTSDIR}/devel/p5-IPC-Run3 \
	p5-Plack>0:${PORTSDIR}/www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Plack::Middleware::JSConcat.3

.include <bsd.port.mk>
