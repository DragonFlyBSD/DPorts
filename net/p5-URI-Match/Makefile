# New ports collection makefile for:	URI::Match
# Date created:		09 Sep 2011
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: net/p5-URI-Match/Makefile 326380 2013-09-05 10:32:23Z az $
#

PORTNAME=	URI-Match
PORTVERSION=	0.00001
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for matching URLs by parts

RUN_DEPENDS=	\
	p5-URI>0:${PORTSDIR}/net/p5-URI
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	URI::Match.3

.include <bsd.port.mk>
